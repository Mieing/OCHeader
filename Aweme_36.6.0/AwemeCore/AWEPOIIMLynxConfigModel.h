@class NSString;

@interface AWEPOIIMLynxConfigModel : NSObject

@property (readonly, copy, nonatomic) NSString *lynxURL;
@property (readonly, nonatomic) double enable;
@property (readonly, nonatomic) double blankWidth;
@property (readonly, nonatomic) double maxWidth;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double ratio;

+ (id)configWithDictionary:(id)a0;

- (double)handlePointFiveValue:(double)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
