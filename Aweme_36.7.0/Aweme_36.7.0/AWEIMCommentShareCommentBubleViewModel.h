@class AWEIMMessage, NSString, UIImage, NSAttributedString, AWEURLModel;

@interface AWEIMCommentShareCommentBubleViewModel : NSObject <IESIMCommentShareCommentBubbleViewModelProtocol> {
    double _maxTextWidth;
    struct CGSize { double width; double height; } _bubleViewSize;
}

@property (retain, nonatomic) NSAttributedString *titleAttributedString;
@property (retain, nonatomic) NSAttributedString *subTitleAttributedString;
@property (retain, nonatomic) NSAttributedString *commentCopyString;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL commentAvailiable;
@property (nonatomic) double subTitleHeight;
@property (nonatomic) double subTitleWidth;
@property (readonly, nonatomic) AWEURLModel *commentUrl;
@property (retain, nonatomic) UIImage *imBubbleGrandientImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)spacingToAvatar;

- (struct CGSize { double x0; double x1; })sizeOfBubleView;
- (void)p_initValues;
- (void)p_configTitleAttributeStr;
- (void)p_configSubTitleAttributeStr;
- (void)p_configCopyAttributeStr;
- (id)p_titleAttributeDict;
- (id)p_processLimitString:(id)a0 second:(id)a1 withLimit:(double)a2 attributes:(id)a3 maxNumOfLines:(long long)a4;
- (id)p_subTitleAttributeDict;
- (double)textLeadingSpacing;
- (double)textTopSpacing;
- (long long)titleNumOfLine;
- (long long)subTitleNumOfLine;
- (BOOL)shouldShowCommentMediaStyle;
- (BOOL)shouldShowCommentMediaView;
- (struct CGSize { double x0; double x1; })commentMediaSize;
- (BOOL)commentMediaIsVideo;
- (void)p_configCommentMediaViewIfNeed;
- (void)p_resetMaxWidth;
- (void)p_calculateBubleSize;
- (BOOL)commentShareIsEntertainment;
- (id)p_comment:(id)a0 withType:(long long)a1;
- (double)commentMediaTopSpace;
- (struct CGSize { double x0; double x1; })commentStickerSize;
- (struct CGSize { double x0; double x1; })commentImageAndVideoSize;
- (void)updateWithMessage:(id)a0 commentAvailiable:(BOOL)a1;
- (id)bubleBgColor;
- (double)bubleConerRadius;
- (id)initWithMessage:(id)a0 commentAvailiable:(BOOL)a1;
- (void).cxx_destruct;
- (long long)commentType;

@end
