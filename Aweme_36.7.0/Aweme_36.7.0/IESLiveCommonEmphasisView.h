@class HTSEventContext, NSString, HTSLiveHighlightAreaContainer, IESLiveMessageLabel, IESLiveGCDTimer, IESLivePublicScreenCommonMessageParser, NSMutableArray, HTSLiveAmazingBackgroundView, IESLivePSComponentConfigModel, IESLivePublicScreenDisplayTextParseConfig;

@interface IESLiveCommonEmphasisView : UIView <IESLivePublicScreenLayoutSubscriber, IESLivePublicScreenSettingChangedAction, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) HTSLiveAmazingBackgroundView *contentView;
@property (retain, nonatomic) IESLiveMessageLabel *contentLabel;
@property (retain, nonatomic) NSMutableArray *actions;
@property (nonatomic) BOOL disableTransform;
@property (retain, nonatomic) IESLivePublicScreenCommonMessageParser *messageParser;
@property (retain, nonatomic) HTSLiveHighlightAreaContainer *container;
@property (nonatomic) double publicScreenWidth;
@property (nonatomic) long long leftSpace;
@property (nonatomic) long long rightSpace;
@property (retain, nonatomic) IESLivePublicScreenDisplayTextParseConfig *textConfig;
@property (nonatomic) BOOL enableInsetsOpt;
@property (retain, nonatomic) IESLiveGCDTimer *interactionTimer;
@property (copy, nonatomic) id /* block */ disappearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)didSetAttachingDIContext;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)addActionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 piece:(id)a1 tapAction:(id /* block */)a2;
- (void)handleTrigger:(id)a0;
- (void)updateLabelHeight;
- (void)updateDisplayText:(id)a0;
- (void)removeActions;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)publicScreenComponentProduced;
- (BOOL)executedTapTextAction:(id)a0;
- (void)trackEvent:(id)a0 Params:(id)a1;
- (void)stopInteractionTimer;
- (id)attributedStringWithDisplayText:(id)a0;
- (void)updateLabelLayout;
- (void)addActionWithDisplayText:(id)a0;
- (void)loadImageForDisplayText:(id)a0 completion:(id /* block */)a1;
- (double)fontSizeWithType:(unsigned long long)a0;
- (void)handleContainer:(id)a0;
- (void)fontSizeTypeChanged:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithContainer:(id)a0;
- (void)layoutSubviews;
- (void)setup;

@end
