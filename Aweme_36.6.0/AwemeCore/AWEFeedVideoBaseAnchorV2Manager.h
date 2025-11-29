@class NSString, NSDictionary, AWEFeedVideoLocalLifeAnchorV2ViewContext, AWEFeedVideoLocalLifeAnchorV2UserActionUtils;
@protocol AWEFeedVideoLocalLifeAnchorV2ManagerDelegate;

@interface AWEFeedVideoBaseAnchorV2Manager : NSObject <AWEFeedVideoLocalLifeAnchorV2ManagerProtocol, AWEFeedVideoLocalLifeAnchorV2UserActionDelegate>

@property (retain, nonatomic) AWEFeedVideoLocalLifeAnchorV2ViewContext *viewContext;
@property (retain, nonatomic) AWEFeedVideoLocalLifeAnchorV2UserActionUtils *userActionUtils;
@property (copy, nonatomic) NSString *secondLineText;
@property (nonatomic) BOOL hasSecondLine;
@property (retain, nonatomic) NSDictionary *clickExtraInfo;
@property (retain, nonatomic) NSString *clickArea;
@property (weak, nonatomic) id<AWEFeedVideoLocalLifeAnchorV2ManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)anchorViewWillShowOnSuperview;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerParamsForTemplateAnchorClick;
- (BOOL)shouldBusinessInvoke;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)didShowDoubleLineStyleAnchor;
- (void)handlePlayerPlayedPeriodChanged:(double)a0;
- (void)handleDidEndDisplaying;
- (void)handleDidDisappear;
- (void)handleAppDidEnterBackground;
- (void)handleAnchorElementLeftInteractionShow;
- (void)handlePlayerPlayedLoopTimes:(unsigned long long)a0;
- (void)updateAnchorViewWithViewContext:(id)a0;
- (void)handlerTemplateAnchorViewClicked:(id)a0 extraInfo:(id)a1;
- (void)configSecondLineText:(id)a0;
- (void)showSecondLine;
- (void)handleUserActionToShowTwoLine;
- (id)initWithViewContext:(id)a0;
- (id)getSecondLineText;
- (void)configSecondLineContentModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
