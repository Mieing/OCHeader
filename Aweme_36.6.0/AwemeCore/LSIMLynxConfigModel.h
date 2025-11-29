@class NSString;

@interface LSIMLynxConfigModel : NSObject

@property (copy, nonatomic) NSString *lynxURL;
@property (nonatomic) double enable;
@property (nonatomic) double blankWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) double height;
@property (nonatomic) double ratio;

+ (id)configWithDictionary:(id)a0;

- (double)handlePointFiveValue:(double)a0;
- (id)schemaWithNeedExtraParams:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
