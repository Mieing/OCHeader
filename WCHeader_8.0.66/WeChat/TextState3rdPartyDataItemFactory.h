@interface TextState3rdPartyDataItemFactory : NSObject

+ (void)requestFinderDataItemFromFeedId:(id)a0 nonceId:(id)a1 handler:(id /* block */)a2;
+ (void)requestWeAppDataItemFromUsername:(id)a0 path:(id)a1 type:(unsigned int)a2 handler:(id /* block */)a3;
+ (id)upgradeH5DataItem;

@end
