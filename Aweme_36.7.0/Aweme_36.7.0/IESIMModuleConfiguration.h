@class NSString, NSArray;

@interface IESIMModuleConfiguration : NSObject

@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSArray *moduleComponents;
@property (copy, nonatomic) NSArray *lazyModuleComponents;

- (void).cxx_destruct;

@end
