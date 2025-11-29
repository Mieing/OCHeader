@class NSString;

@interface WCFeedExposureItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *nsFeedId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int uiCreateTime;
@property (nonatomic) unsigned int uiCount;
@property (nonatomic) BOOL isFold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsFeedId;
+ (void)PBArrayAdd_uiCreateTime;
+ (void)PBArrayAdd_uiCount;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_isFold;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
