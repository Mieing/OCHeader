@class NSMutableDictionary, UIImageView, UILabel, UIView;

@interface AWESearchFullPageRefreshHeader : MJRefreshHeader

@property (retain, nonatomic) UIView *innerLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSMutableDictionary *textDictionary;
@property (nonatomic) double ignoredFullPageScrollViewContentInsetTop;

- (void)placeSubviews;
- (id)getInnerLabel;
- (void)p_setupLabel;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;
- (void)setText:(id)a0 forState:(long long)a1;

@end
