@class UIView;
@protocol AWEFriendsContactCardViewProtocol;

@interface AWEFriendsContactCardCell : UITableViewCell

@property (retain, nonatomic) UIView<AWEFriendsContactCardViewProtocol> *contactCardView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 shareCellsBottom:(double)a2 maxNumOfShareChannels:(long long)a3;
- (void).cxx_destruct;

@end
