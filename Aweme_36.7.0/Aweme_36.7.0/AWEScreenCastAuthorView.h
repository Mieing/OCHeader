@class UILabel, AWEAwemeModel, DUXTextTag;
@protocol AWEScreenCastAuthorViewDelegate;

@interface AWEScreenCastAuthorView : UIView

@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) DUXTextTag *followTag;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWEScreenCastAuthorViewDelegate> delegate;

- (void)didClickFollowButton;
- (void)handleFollowedNotification:(id)a0;
- (void)handleUnFollowedNotification:(id)a0;
- (void)didClickAuthorName;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update;
- (void)updateWithModel:(id)a0;

@end
