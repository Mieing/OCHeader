@class UIImageView, UILabel, NSString;

@interface AWEIMTaskPlatformDetailCardDetailRecommendIconCell : UITableViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtiltleLabel;
@property (retain, nonatomic) UILabel *highlightLabel;
@property (retain, nonatomic) UILabel *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)addSubiews;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)addConstraints;

@end
