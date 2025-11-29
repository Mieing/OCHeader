@class NSString;

@interface SLIABTestExperiment : NSObject

@property (copy, nonatomic) NSString *libraKey;
@property (nonatomic) unsigned long long valueType;
@property (retain, nonatomic) id defaultValue;

- (void).cxx_destruct;

@end
