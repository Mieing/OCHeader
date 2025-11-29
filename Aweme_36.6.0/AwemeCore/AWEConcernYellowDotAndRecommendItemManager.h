@class NSString;

@interface AWEConcernYellowDotAndRecommendItemManager : NSObject <AWEConcernYellowDotAndRecommendItemManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isExistUnreadVideoInFollowPage;
+ (void)configYellowDotExistence:(BOOL)a0;
+ (id)getStoregeKeyWithOriginKey:(id)a0;


@end
