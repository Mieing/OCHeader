@class UIColor, NSString, IESLiveEmojiTextParser, IESLivePlaybackComponentContext, HTSEventContext, IESLivePlaybackCommentConf, IESLivePlaybackCommentPanelViewModel;

@interface IESLivePlaybackCommentInputViewModel : NSObject

@property (retain, nonatomic) IESLivePlaybackCommentConf *conf;
@property (nonatomic) BOOL isCommentForbidden;
@property (retain, nonatomic) IESLiveEmojiTextParser *textParser;
@property (nonatomic) BOOL canSend;
@property (copy, nonatomic) NSString *plainText;
@property (copy, nonatomic) NSString *placeHolderLabelText;
@property (copy, nonatomic) UIColor *placeHolderLabelColor;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLivePlaybackCommentPanelViewModel *viewModel;
@property (nonatomic) unsigned long long keyboard;
@property (copy, nonatomic) NSString *changeText;

- (id)extraTrackParams;
- (void)setupTextParser;
- (id)emoticonAttributedTextFromPlainText:(id)a0;
- (void)syncPlainText:(id)a0;
- (id)plainTextFromEmoticonAttributedText:(id)a0;
- (void)trackerKeyboardButtonClicked;
- (id)initWithCommentConfig:(id)a0;
- (void)forbiddenUser:(BOOL)a0;
- (void)trackerAtButtonClicked;
- (id)currentCommentTextColor;
- (void).cxx_destruct;
- (void)dealloc;

@end
