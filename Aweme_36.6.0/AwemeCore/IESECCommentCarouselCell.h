@class UIImageView, UILabel, NSString;

@interface IESECCommentCarouselCell : UICollectionViewCell <IESECCarouselCellUpdaterProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *commentContentView;
@property (retain, nonatomic) UILabel *quoteLabel;
@property (readonly, nonatomic) double iconWH;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
