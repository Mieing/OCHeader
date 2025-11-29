@class NSString, NSMutableDictionary, IESLivePublicScreenLayoutInfoModel;
@protocol IESLivePublicScreenLayoutCalculateDataProvider;

@interface IESLivePublicScreenNormalLayoutCalculator : NSObject <IESLivePublicScreenLayoutCalculator>

@property (nonatomic) unsigned long long heightType;
@property (nonatomic) double topAvoidHeight;
@property (nonatomic) BOOL enableHeightSetting;
@property (retain, nonatomic) NSMutableDictionary *avoidHeightDic;
@property (weak, nonatomic) id<IESLivePublicScreenLayoutCalculateDataProvider> provider;
@property (retain, nonatomic) IESLivePublicScreenLayoutInfoModel *infoModel;
@property (nonatomic) BOOL disableCalculate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layoutInfoDict;
- (void)updatePublicScreenHeightWithScene:(unsigned long long)a0;
- (void)updatePublicScreenWidth:(double)a0 withSource:(unsigned long long)a1;
- (void)removePublicScreenOutSetWidth;
- (double)calculateMessageListHeightWithConstHeight:(double)a0;
- (double)getSafeHeight:(double)a0;
- (double)calculateAvoidHeightWithConstHeight:(double)a0;
- (void)calculatePublicScreenLayout;
- (void)calculateRealMessageListHeight;
- (void)updateHeightSetSwitchWithScene:(unsigned long long)a0;
- (void)updatePublicScreenHeightWithReason:(id)a0;
- (void)setTopAvoidHeight:(double)a0 withScene:(id)a1;
- (double)messageListMinHeight;
- (double)messageListMaxHeight;
- (unsigned long long)preCalculateHorizontalLayoutType;
- (BOOL)hitMinProtectHeight;
- (BOOL)hitMaxProtectHeight;
- (double)bottomPadding;
- (void).cxx_destruct;
- (id)init;

@end
