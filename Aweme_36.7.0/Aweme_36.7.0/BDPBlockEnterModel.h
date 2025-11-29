@class NSString, NSArray;

@interface BDPBlockEnterModel : NSObject

@property (nonatomic) BOOL finallySwitch;
@property (copy, nonatomic) NSString *pushSource;
@property (retain, nonatomic) NSArray *issueList;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
