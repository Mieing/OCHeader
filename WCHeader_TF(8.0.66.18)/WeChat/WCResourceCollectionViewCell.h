@class NSString, SimpleChatLogInfo, ResourceMsgImageSquareThumbView;
@protocol WCResourceCollectionViewCellDelegate;

@interface WCResourceCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) SimpleChatLogInfo *msgInfo;
@property (retain, nonatomic) ResourceMsgImageSquareThumbView *thumbView;
@property (weak, nonatomic) id<WCResourceCollectionViewCellDelegate> delegate;

+ (id)identifier;

- (BOOL)isSelected;
- (BOOL)selected;
- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithMsgInfo:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)onClickMsgSquareThumb:(id)a0;
- (void).cxx_destruct;

@end
