@class HTSLiveHotWord, HTSLiveNewHotGatherMessage, NSString, HTSEventContext, UIButton, HTSLiveAmazingBackgroundView, IESLivePSComponentConfigModel, UILabel;
@protocol HTSLiveTemplateProviderAdapter;

@interface IESLiveNewHotMessageView : UIView <CAAnimationDelegate, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) HTSLiveAmazingBackgroundView *contentView;
@property (retain, nonatomic) UILabel *prefixNumLabel;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *interactButton;
@property (retain, nonatomic) HTSLiveNewHotGatherMessage *hotGatherMessage;
@property (retain, nonatomic) HTSLiveHotWord *currentHotWord;
@property (retain, nonatomic) id<HTSLiveTemplateProviderAdapter> templateProvider;
@property (nonatomic) BOOL disableTransfrom;
@property (nonatomic) BOOL enableInsetsOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)didSetAttachingDIContext;
- (void)configContentLabel;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)publicScreenComponentProduced;
- (void)trackEvent:(id)a0 Params:(id)a1;
- (void)interactButtonClicked;
- (void)addButtonIfNeed;
- (void)resetWithHotWord:(id)a0;
- (void)startContentChange:(id /* block */)a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)layoutSubviews;
- (void)setup;
- (void)removeButton;

@end
