@class NSString;

@interface ToygerDocFieldInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *feature;
@property (copy, nonatomic) NSString *feaVersion;

- (void).cxx_destruct;
- (id)init;

@end
