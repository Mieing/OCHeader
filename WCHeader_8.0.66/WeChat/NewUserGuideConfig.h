@class NSString;

@interface NewUserGuideConfig : NSObject <PBCoding>

@property (nonatomic) unsigned int uiRegTime;
@property (nonatomic) unsigned int uiStartCount;
@property (nonatomic) BOOL bShowMainFrameTip;
@property (nonatomic) BOOL bShowContactsAddTip;
@property (nonatomic) BOOL bShowVoiceTip;
@property (nonatomic) BOOL bShowVoipAndPhoneTip;
@property (nonatomic) BOOL bShowNearByRedDot;
@property (nonatomic) BOOL bShowShakeRedDot;
@property (nonatomic) BOOL bShowSightTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uiRegTime;
+ (void)PBArrayAdd_uiStartCount;
+ (void)PBArrayAdd_bShowMainFrameTip;
+ (void)PBArrayAdd_bShowContactsAddTip;
+ (void)PBArrayAdd_bShowVoiceTip;
+ (void)PBArrayAdd_bShowVoipAndPhoneTip;
+ (void)PBArrayAdd_bShowNearByRedDot;
+ (void)PBArrayAdd_bShowShakeRedDot;
+ (void)PBArrayAdd_bShowSightTip;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;

@end
