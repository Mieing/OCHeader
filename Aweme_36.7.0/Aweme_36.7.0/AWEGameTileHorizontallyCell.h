@class NSString, UIImageView, UILabel, UIButton;

@interface AWEGameTileHorizontallyCell : UICollectionViewCell <AWEGameCellProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *playButton;
@property (copy, nonatomic) id /* block */ onPlayButtonClickedBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
