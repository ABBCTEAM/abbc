#!/bin/bash

for n in {1..900}
do
./ABBCCoind sendmany "stake" '{"PKbzx7YFAsxmhkHmvmYNSVcaqX4MpMS9nk":400,"PFkTpaQbuoUf3oisGohTjhe5Z6VeXrsrUv":400,"PA4zckvvSN9TGHtMazCe3rx7GbV3xEBs76":400,"PCUtCGVAxzkgqrj2QFwBxRf6TMuj8CQUso":400,"PNoAfcfgpi8gnYCxfM4hAFJv9XYTscfwpW":400}'
sleep 10
done
