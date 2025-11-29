@class NSString, NSArray;

@interface AWENearbyTransformerItemViewModel : AWEBaseViewModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *backgroundImg;

- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
