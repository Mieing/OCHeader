@class MMHeadImageView;

@interface SharePreConfirmHeadCell : UITableViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (nonatomic) BOOL isFakeContact;
@property (copy, nonatomic) id /* block */ onClickHeadImageOrUserName;
@property (copy, nonatomic) id /* block */ onViewMsgContent;

- (void)layoutSubviews;
- (void)updateWithContact:(id)a0 showArrow:(BOOL)a1 showLine:(BOOL)a2;
- (id)genHeadImageViewWithContract:(id)a0;
- (void).cxx_destruct;

@end
