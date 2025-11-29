@class NSString;

@interface AWERootModelPropertyInfo : NSObject

@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) Class propertyClass;
@property (copy, nonatomic) Class modelClassInArray;
@property (nonatomic) BOOL isReadonly;
@property (nonatomic) BOOL disableStrictType;
@property (nonatomic) BOOL isLocalProperty;

+ (id)infoWithProperty:(struct objc_property { } *)a0;
+ (id)infoWithPropertyName:(id)a0;

- (void).cxx_destruct;

@end
