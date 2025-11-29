@class NSString;

@interface WSRecommendSetting : NSObject <PBCoding>

@property (nonatomic) BOOL hasConfirmVideoDragTips;
@property (nonatomic) BOOL hasConfirmVideoGoodLookEducateAlert;
@property (nonatomic) BOOL hasConfirmVideoGoodLookTipEducateToast;
@property (nonatomic) BOOL hasWowContent;
@property (nonatomic) unsigned int wowContentUpdateTs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_hasConfirmVideoDragTips;
+ (void)PBArrayAdd_hasConfirmVideoGoodLookEducateAlert;
+ (void)PBArrayAdd_hasConfirmVideoGoodLookTipEducateToast;
+ (void)PBArrayAdd_hasWowContent;
+ (void)PBArrayAdd_wowContentUpdateTs;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
