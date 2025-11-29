@class NSString, UIColor;

@interface ACCImageToColorModel : NSObject

@property (copy, nonatomic) NSString *upperColor;
@property (copy, nonatomic) NSString *downColor;
@property (retain, nonatomic) UIColor *uppersColor;
@property (retain, nonatomic) UIColor *downsColor;
@property (copy, nonatomic) NSString *totalColor;

- (id)colors;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)a0;

@end
