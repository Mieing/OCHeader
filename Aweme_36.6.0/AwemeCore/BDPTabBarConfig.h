@class NSString, NSArray;

@interface BDPTabBarConfig : NSObject

@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *selectedColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *borderStyle;
@property (copy, nonatomic) NSArray *list;
@property (copy, nonatomic) NSString *position;
@property (nonatomic) BOOL custom;

+ (id)modelContainerPropertyGenericClass;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
