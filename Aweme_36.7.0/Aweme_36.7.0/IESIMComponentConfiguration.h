@class NSString, NSArray;

@interface IESIMComponentConfiguration : NSObject

@property (copy, nonatomic) NSString *componentName;
@property (copy, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *lazyComponents;

- (void).cxx_destruct;

@end
