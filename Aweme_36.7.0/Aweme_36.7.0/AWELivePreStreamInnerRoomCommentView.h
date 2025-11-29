@class UIImageView, IESLiveGCDTimer, UIView, UILabel;
@protocol IESLiveLanguageService;

@interface AWELivePreStreamInnerRoomCommentView : UIView

@property (retain, nonatomic) UIView *commentContainer;
@property (retain, nonatomic) UIView *dividerLine;
@property (retain, nonatomic) IESLiveGCDTimer *showTimer;
@property (retain, nonatomic) UIView *toCommentContainer;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) UIImageView *commentIcon;
@property (retain, nonatomic) UILabel *preText;
@property (retain, nonatomic) UILabel *commentText;
@property (retain, nonatomic) UILabel *commentTime;

- (void)disableLocalizations;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
