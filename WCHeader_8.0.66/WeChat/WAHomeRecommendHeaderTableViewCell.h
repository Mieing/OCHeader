@class NSString, UILabel, UIView;

@interface WAHomeRecommendHeaderTableViewCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol> {
    UIView *m_bottomLine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *titleLabel;

+ (double)viewHeightByDataModel:(id)a0;

- (void)setViewDataModel:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubViews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
