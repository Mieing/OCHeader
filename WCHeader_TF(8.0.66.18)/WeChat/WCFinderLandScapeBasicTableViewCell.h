@protocol WCFinderLandScapeBasicTableViewCellDelegate;

@interface WCFinderLandScapeBasicTableViewCell : UITableViewCell

@property (weak, nonatomic) id<WCFinderLandScapeBasicTableViewCellDelegate> delegate;

- (void)updateWithContentVM:(id)a0;
- (void)setShowMaskView:(BOOL)a0;
- (int)getCommentScene;
- (void).cxx_destruct;

@end
