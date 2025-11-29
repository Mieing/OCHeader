@class NSString, AWENearbyGuideSceneInfoModel, AWENearbyGeneralGuideModel;

@interface AWENearbyDotModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long dotType;
@property (nonatomic) unsigned long long dotSence;
@property (nonatomic) unsigned long long generalDotSence;
@property (nonatomic) long long dotNumber;
@property (copy, nonatomic) NSString *dotText;
@property (nonatomic) BOOL isOnlyTabDot;
@property (nonatomic) long long isRebootRecovering;
@property (nonatomic) BOOL isDownGrading;
@property (retain, nonatomic) AWENearbyGeneralGuideModel *guideInfo;
@property (retain, nonatomic) AWENearbyGuideSceneInfoModel *guidSceneInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (unsigned long long)getDotSceneWithBubbleType:(long long)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraTrackParams;
- (void)initProperty;
- (BOOL)isEscapeSettings:(unsigned long long)a0;
- (void)downGrade;
- (BOOL)continueShow;
- (BOOL)rebootRecoverDotDowngrade;
- (long long)pageType;
- (void).cxx_destruct;
- (id)init;

@end
