@class NSString;

@interface WAAppExtJSModel : MMObject

@property (nonatomic) unsigned long long target;
@property (nonatomic) unsigned long long timing;
@property (nonatomic) unsigned int downloadCostTimeInMs;
@property (copy, nonatomic) NSString *jsContent;

- (void).cxx_destruct;

@end
