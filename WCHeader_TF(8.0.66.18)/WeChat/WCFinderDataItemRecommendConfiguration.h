@class NSString, RecommendConfiguration;

@interface WCFinderDataItemRecommendConfiguration : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) unsigned long long maxUnreadCount;
@property (retain, nonatomic) RecommendConfiguration *config;
@property (nonatomic) BOOL favRelateListEnable;
@property (nonatomic) BOOL favRelateListEnableOnClick;
@property (nonatomic) BOOL likeRelateListEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_maxUnreadCount;
+ (void)PBArrayAdd_config;
+ (void)PBArrayAdd_favRelateListEnable;
+ (void)PBArrayAdd_favRelateListEnableOnClick;
+ (void)PBArrayAdd_likeRelateListEnable;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (id)configurationWithConfig:(id)a0 isFeedContainVideo:(BOOL)a1;

@end
