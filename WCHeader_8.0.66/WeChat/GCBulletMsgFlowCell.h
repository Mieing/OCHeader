@class ChatroomMsgPackExtend, MMUILabel, MMWebImageView;
@protocol GCBulletMsgFlowCellDelegate;

@interface GCBulletMsgFlowCell : UITableViewCell

@property (retain, nonatomic) MMWebImageView *avatarIcon;
@property (retain, nonatomic) MMUILabel *msgLabel;
@property (retain, nonatomic) ChatroomMsgPackExtend *msgPack;
@property (weak, nonatomic) id<GCBulletMsgFlowCellDelegate> delegate;
@property (nonatomic) BOOL isThinStyle;

+ (id)msgContentOfPack:(id)a0;
+ (double)labelHeightForMsgPack:(id)a0 withWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
