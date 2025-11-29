@class NSString, UIImageView, UILabel, UIButton;
@protocol AWEIMSearchResultCellHeaderItemProtocol, AWEIMSearchSectionHeaderViewProtocol;

@interface AWEIMSearchSectionHeaderView : UICollectionReusableView <AWEIMRendererProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *accessoryView;
@property (retain, nonatomic) UIButton *btn;
@property (retain, nonatomic) id<AWEIMSearchResultCellHeaderItemProtocol> item;
@property (weak, nonatomic) id<AWEIMSearchSectionHeaderViewProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

@end
