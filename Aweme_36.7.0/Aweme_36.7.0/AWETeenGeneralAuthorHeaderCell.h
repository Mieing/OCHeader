@class UILabel, UIButton, NSString;

@interface AWETeenGeneralAuthorHeaderCell : UICollectionViewCell <AWETeenGeneralCellProtocol>

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIButton *moreButton;
@property (copy, nonatomic) id /* block */ viewMoreTappedBlock;
@property (nonatomic) BOOL canViewMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSize;

@end
