@class UIImageView, MMBadgeView, UIView, UILabel, GameCenterBaseMsg;

@interface GameLifeNotifyInteractiveMsgCell : MMTableViewCell {
    BOOL _addSeperator;
    int _showType;
    UIView *_separator;
    MMBadgeView *_badgeView;
    UILabel *_desc;
    unsigned int _unReadCount;
    GameCenterBaseMsg *_msg;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 addSeperator:(BOOL)a2 msgShowType:(int)a3;
- (void)setupView;
- (void)layoutSubviews;
- (void)updateCellDataWithBaseMsg:(id)a0 unReadCount:(unsigned int)a1;
- (BOOL)isInteractCell;
- (void)layoutBadgeView;
- (void)updateBadgeView;
- (void)updateDescText;
- (void).cxx_destruct;

@end
