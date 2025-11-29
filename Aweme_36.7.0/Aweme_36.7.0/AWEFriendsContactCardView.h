@class CAGradientLayer, AWEFriendsShareCell, NSString, UIView;
@protocol AWEFriendsContactCommonViewProtocol;

@interface AWEFriendsContactCardView : UIView <AWEFriendsContactCardViewProtocol>

@property (retain, nonatomic) AWEFriendsShareCell *weChatShareCell;
@property (retain, nonatomic) AWEFriendsShareCell *QQShareCell;
@property (retain, nonatomic) UIView *shareCells;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *gradientView;
@property (nonatomic) BOOL isConstColor;
@property (retain, nonatomic) UIView<AWEFriendsContactCommonViewProtocol> *contactCommonView;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL needGradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShouldHideEntryButton:(BOOL)a0;
- (void)p_setupViewsWithTopPadding:(double)a0 shareCellsBottom:(double)a1 maxNumOfShareChannels:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isConstColor:(BOOL)a1 shareCellsBottom:(double)a2 maxNumOfShareChannels:(long long)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
