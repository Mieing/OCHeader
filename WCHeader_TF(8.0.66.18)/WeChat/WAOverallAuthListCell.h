@class NSString, NSArray, UIImage, UIView, UILabel, MMWebImageView;

@interface WAOverallAuthListCell : UITableViewCell <MMWebImageViewDelegate, ZZFlexibleLayoutViewProtocol> {
    UIImage *_defaultHeaderImage;
    NSArray *_scopeList;
}

@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UIView *titleDescContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *arrowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setViewDataModel:(id)a0;
- (void)initSubviews;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (void)layoutSubviews;
- (id)getFitDescWithDescList:(id)a0 width:(double)a1;
- (BOOL)isDescFit:(id)a0 width:(double)a1;
- (void).cxx_destruct;

@end
