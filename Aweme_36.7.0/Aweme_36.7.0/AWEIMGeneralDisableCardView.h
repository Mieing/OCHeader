@class UILabel, NSString;

@interface AWEIMGeneralDisableCardView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (copy, nonatomic) NSString *conversationID;

- (void)awe_themeReload;
- (void)p_addObserver;
- (void)p_setupUIs;
- (void)p_chatBackgroundDidChangeNty:(id)a0;
- (void)p_setupBackgroundColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
