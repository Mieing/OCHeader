@class NSDictionary;

@interface AWEYapImageStyleUtil : NSObject

@property (nonatomic) long long style;
@property (copy, nonatomic) NSDictionary *imageNameDict;
@property (copy, nonatomic) NSDictionary *sizeDict;

+ (id)shareInstance;

- (void)fetchConfig;
- (void)refreshStyle;
- (void)p_setImageData;
- (void)p_setSizeData;
- (id)imageInScene:(long long)a0;
- (double)sizeInScene:(long long)a0;
- (void).cxx_destruct;

@end
