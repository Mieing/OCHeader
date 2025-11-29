@class NSString;

@interface BDSCBackgroundUIModel : NSObject

@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *gradientColor;
@property (copy, nonatomic) NSString *image;

+ (id)modelCustomPropertyMapper;
+ (id)verticalModelWithDictionary:(id)a0;
+ (id)horizonModelWithDictionary:(id)a0;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
