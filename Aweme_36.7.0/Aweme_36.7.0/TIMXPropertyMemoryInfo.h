@class NSString;

@interface TIMXPropertyMemoryInfo : NSObject

@property (copy, nonatomic) NSString *propertyName;
@property (nonatomic) unsigned long long memorySize;
@property (nonatomic) float percentage;
@property (copy, nonatomic) NSString *typeName;

- (void).cxx_destruct;
- (id)description;

@end
