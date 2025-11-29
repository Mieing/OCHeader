@class HTSEventContext, NSString, NSArray, IESLivePlaybackCommentInputViewModel, UIView, UITextRange, IESLivePlaybackComponentContext, UIColor;
@protocol IESLivePlaybackAdapter;

@interface IESLivePlaybackCommentPanelViewModel : NSObject

@property (retain, nonatomic) IESLivePlaybackCommentInputViewModel *inputViewModel;
@property (retain, nonatomic) UITextRange *selectedTextRange;
@property (retain, nonatomic) NSArray *emoticonModelPages;
@property (retain, nonatomic) id<IESLivePlaybackAdapter> emoticonResource;
@property (weak, nonatomic) UIView *tipView;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, copy, nonatomic) NSString *placeHolderLabelText;
@property (readonly, copy, nonatomic) UIColor *placeHolderLabelColor;
@property (nonatomic) unsigned long long currentEmojiType;
@property (copy, nonatomic) NSString *storedComment;
@property (copy, nonatomic) NSString *insertEmoticon;
@property (nonatomic) BOOL shouldSend;
@property (nonatomic) BOOL shouldDelete;
@property (nonatomic) BOOL shouldDismiss;
@property (nonatomic) BOOL willShowEmoticonOrColor;
@property (nonatomic) long long orientation;
@property (nonatomic) long long configSelectedIndex;
@property (nonatomic) struct CGSize { double width; double height; } inputAreaSize;
@property (copy, nonatomic) NSString *commentDraft;
@property (nonatomic) unsigned long long panelSourceType;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)extraTrackParams;
- (void)trackEmojiDidSelected:(id)a0 idx:(long long)a1 tab:(id)a2;
- (void)emoticonView:(id)a0 shouldSendEmoticon:(id)a1;
- (void)emoticonView:(id)a0 didDeleteEmoticon:(id)a1;
- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1;
- (void)clearStoredComment;
- (void)systemKeyBoardShow;
- (id)initWithCommentConf:(id)a0;
- (void)forbiddenUserComment:(BOOL)a0;
- (BOOL)isEmoticonEnabled;
- (void)commentTrackerSubpanelShowWithType:(unsigned long long)a0;
- (void)updateTextViewSelectRange:(id)a0;
- (void)emocticonKeyBoardShow;
- (id)colorsFromString:(id)a0;
- (struct CGSize { double x0; double x1; })caculateCellSizeWithIsLandscape:(BOOL)a0 isPad:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
