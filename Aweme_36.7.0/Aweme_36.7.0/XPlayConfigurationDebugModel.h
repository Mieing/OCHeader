@class NSString;

@interface XPlayConfigurationDebugModel : NSObject

@property (copy, nonatomic) NSString *propertyKey;
@property (copy, nonatomic) id propertyValue;
@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=isModified) BOOL modified;

+ (id)propertyBlackList;
+ (id)modelWithProperty:(struct objc_property { } *)a0;

- (void).cxx_destruct;

@end
