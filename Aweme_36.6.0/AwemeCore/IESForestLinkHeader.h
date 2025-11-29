@interface IESForestLinkHeader : NSObject

+ (void)parse:(id)a0 mainUrl:(id)a1 completion:(id /* block */)a2;
+ (id)_parseLinkHeaderItemContent:(id)a0;
+ (void)_addLinkHeaderItem:(id)a0 toPreloadDic:(id)a1;
+ (id)_parseRel:(id)a0;
+ (id)_parseUrl:(id)a0;
+ (id)_parseAs:(id)a0;
+ (id)_parseCdnExpiredTime:(id)a0;

@end
