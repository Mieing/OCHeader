@class UIView, NSString, UITapGestureRecognizer, AWEGeneralSearchModel, UIImageView, YYAnimatedImageView, NSDictionary, YYLabel, AWESearchEventDispather;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchTopicCommentInfoComponent : AWESearchComponent <AWESearchTopicCommentInfoComponentProtocol, AWESearchComponentBusinessProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) YYLabel *commentTextLabel;
@property (retain, nonatomic) UIImageView *commentImageView;
@property (retain, nonatomic) YYAnimatedImageView *contentStickerView;
@property (retain, nonatomic) UITapGestureRecognizer *reloadStickerGesture;
@property (retain, nonatomic) UITapGestureRecognizer *openStickerDetailGesture;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (retain, nonatomic) AWEGeneralSearchModel *bindedModel;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (long long)maxNumberOfLines;
+ (id)p_attributedContentForComment:(id)a0;
+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;
+ (id)commentFont;
+ (id)attributedTextWithCommentModel:(id)a0;
+ (id)commentTextAttributesForHeightCalculate;

- (void)p_reloadSticker;
- (void)p_handleReloadStickerGesture:(id)a0;
- (void)p_handleOpenStickerDetailGesture:(id)a0;
- (void)commentImageViewClicked;
- (void)updateWithReferString:(id)a0;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)updateWithChunkModel:(id)a0;
- (void)addTapGesture;
- (id)p_context;
- (void)fullTextButtonRestore;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)updateTextLabelAndImageView;
- (id)fullTextButtonToken;
- (void)p_reloadImageView;
- (void)commentTapped;
- (void)trackClickComment:(unsigned long long)a0;
- (void)openCommentPanel:(BOOL)a0;
- (void)fullTextButtonTapped;
- (void).cxx_destruct;
- (id)textView;
- (id)init;
- (id)componentView;
- (void)setupUI;

@end
