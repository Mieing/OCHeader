@class NSString, IESLivePSComponentConfigModel, HTSLiveHighlightAreaContainer, IESLiveCommonEmphasisView;

@interface IESLiveEmphasisComponent : NSObject

@property (retain, nonatomic) HTSLiveHighlightAreaContainer *currentContainer;
@property (retain, nonatomic) IESLivePSComponentConfigModel *currentConfigModel;
@property (retain, nonatomic) IESLiveCommonEmphasisView *currentView;
@property (nonatomic) long long maxDuration;
@property (copy, nonatomic) NSString *type;

- (id)initWithDIContext:(id)a0;
- (void)removeCurrentView;
- (BOOL)canShowContainer:(id)a0;
- (void)showComponentViewWithContainer:(id)a0;
- (void)handleEmphasisContainer:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)removeAllViews;

@end
