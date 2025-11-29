@class UIImageView, UILabel, UIButton;

@interface RTVInviteParticipantEmptyView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *informativeLabel;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL isSearching;
@property (nonatomic) BOOL disableImageView;
@property (copy, nonatomic) id /* block */ searchFriendBlock;

+ (Class)aAWEPadRTVAdapterClass;

- (void)__configComponents;
- (id)aAWEPadRTVAdapter;
- (void)__createComponent;
- (void)__layoutEmptyPageViews;
- (void)__emptyPageButtonTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 search:(BOOL)a1 disableImageView:(BOOL)a2;
- (void).cxx_destruct;

@end
