@class AWEPageContext, NSString, AWEAwemeModel;
@protocol AWELandscapePageContextInteractionProtocol, AWEEntertainmentMaskDelegate;

@interface AWEEntertainmentBaseMaskPresenter : NSObject <AWEEntertainmenMaskPresenterProtocol>

@property (weak, nonatomic) id<AWEEntertainmentMaskDelegate> internalDelegate;
@property (nonatomic) BOOL hasReportTryEnd;
@property (readonly, weak, nonatomic) AWEAwemeModel *model;
@property (readonly, weak, nonatomic) AWEPageContext<AWELandscapePageContextInteractionProtocol> *context;
@property (weak, nonatomic) id<AWEEntertainmentMaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 context:(id)a1;
- (BOOL)isPreviewVideo;
- (BOOL)shouldShowBlockView;
- (id)trackCommonParams;
- (BOOL)shouldBlurEffectMask;
- (void)handleEventWithType:(long long)a0;
- (id)getPreviewConfig;
- (void)trackButtonShow;
- (void)trackButtonShowOnce;
- (void).cxx_destruct;
- (void)reset;

@end
