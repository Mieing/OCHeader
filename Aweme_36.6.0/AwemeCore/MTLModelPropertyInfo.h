@class NSString, NSValueTransformer;

@interface MTLModelPropertyInfo : NSObject

@property (copy, nonatomic) NSString *propertyName;
@property (retain, nonatomic) NSValueTransformer *valueTransformer;
@property (nonatomic) BOOL disableCreateModelBySonic;

+ (id)infoWithPropertyName:(id)a0;

- (void).cxx_destruct;

@end
