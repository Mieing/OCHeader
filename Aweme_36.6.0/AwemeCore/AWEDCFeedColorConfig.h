@class NSString;

@interface AWEDCFeedColorConfig : AWEDCFeedBaseConfig

@property (nonatomic) unsigned long long themeStyle;
@property (copy, nonatomic) NSString *containerBackgroundColorName;
@property (copy, nonatomic) id /* block */ containerBackgroundColorBlock;
@property (copy, nonatomic) NSString *collectionViewBackgroundColorName;
@property (copy, nonatomic) id /* block */ collectionViewBackgroundColorBlock;
@property (copy, nonatomic) NSString *cellBackgroundColorName;
@property (copy, nonatomic) id /* block */ cellBackgroundColorBlock;
@property (copy, nonatomic) NSString *cellImageBackgroundColorName;
@property (copy, nonatomic) id /* block */ cellImageBackgroundColorBlock;

- (id)collectionViewBackgroundColor;
- (id)cellImageBackgroundColor;
- (void).cxx_destruct;
- (id)cellBackgroundColor;
- (id)containerBackgroundColor;

@end
