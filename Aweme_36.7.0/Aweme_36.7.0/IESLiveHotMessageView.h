@class UIView, IESLiveHotChatMessageModel, NSString, HTSLiveArtTextLabel, HTSEventContext, NSMutableArray, IESLiveEmojiTextParser, HTSLiveAmazingBackgroundView, UILabel, IESLivePSComponentConfigModel;
@protocol HTSLiveTemplateProviderAdapter;

@interface IESLiveHotMessageView : UIView <CAAnimationDelegate, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) HTSLiveAmazingBackgroundView *contentView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *xLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabel;
@property (retain, nonatomic) UIView *comboContainerView;
@property (retain, nonatomic) NSMutableArray *modelQueue;
@property (retain, nonatomic) IESLiveHotChatMessageModel *latestDisplayedModel;
@property (copy, nonatomic) id /* block */ currentComboCompletion;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiTextParser;
@property (retain, nonatomic) id<HTSLiveTemplateProviderAdapter> templateProvider;
@property (nonatomic) BOOL disableTransfrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)didSetAttachingDIContext;
- (void)configContentLabel;
- (void)resetWithModel:(id)a0;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)handleAssembleBusiness:(id)a0;
- (void)publicScreenComponentProduced;
- (void)configComboLabel;
- (void)comboAnimationWithNum:(long long)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)startAllComboAnimationsWithModel:(id)a0 completion:(id /* block */)a1;
- (void)setupModelQueueWithMessage:(id)a0;
- (void)trackOnShow:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)layoutSubviews;
- (void)setup;

@end
