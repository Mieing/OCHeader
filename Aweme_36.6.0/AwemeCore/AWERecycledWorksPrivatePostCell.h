@class AWERecycledWorksPrivatePostModel, NSString, UIVisualEffectView, DUXBaseImageView, DUXBaseLabel;

@interface AWERecycledWorksPrivatePostCell : UICollectionViewCell <AWERecycledWorksPrivatePostCellProtocol>

@property (retain, nonatomic) DUXBaseImageView *coverImageView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) DUXBaseImageView *deleteIcon;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) NSString *defaultTitle;
@property (retain, nonatomic) AWERecycledWorksPrivatePostModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

@end
