@class HTSEventContext, NSString, NSAttributedString, IESLivePinCommentNode, IESLiveEmojiTextParser, IESLivePSComponentConfigModel, UILabel, HTSLiveAmazingBackgroundView;

@interface IESLiveMessageListEmphasisPinView : UIView <IESLivePublicScreenLayoutSubscriber, IESLivePublicScreenSettingChangedAction, IESLivePSComponentInteractAreaChangedAction, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) HTSLiveAmazingBackgroundView *contentView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (copy, nonatomic) NSAttributedString *labelAttributedText;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiParser;
@property (nonatomic) BOOL disableTransform;
@property (nonatomic) long long maxLineNum;
@property (nonatomic) double publicScreenWidth;
@property (nonatomic) long long leftSpace;
@property (nonatomic) long long rightSpace;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } cancelButtonRange;
@property (nonatomic) double fontSize;
@property (nonatomic) BOOL enableInsetsOpt;
@property (retain, nonatomic) IESLivePinCommentNode *node;
@property (copy, nonatomic) id /* block */ fastDeleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)didSetAttachingDIContext;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)addObserve;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)publicScreenComponentProduced;
- (double)fontSizeWithType:(unsigned long long)a0;
- (void)fontSizeTypeChanged:(unsigned long long)a0;
- (void)updateLabelShowContent;
- (BOOL)canShowCancelButton;
- (id)cancelButtonAttributedString;
- (long long)calculateLineCountWithAttributedString:(id)a0;
- (void)updateNumberOfLines:(BOOL)a0;
- (void)interactAreaShowComponentsChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancelButtonClicked:(id)a0;
- (void)layoutSubviews;
- (void)setup;

@end
