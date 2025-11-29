@class NSDictionary, NSArray;

@interface SECNetProtectAction : NSObject

@property (nonatomic) unsigned long long part;
@property (copy, nonatomic) NSDictionary *addParams;
@property (copy, nonatomic) NSArray *removeParams;
@property (copy, nonatomic) NSDictionary *replaceParams;

- (void).cxx_destruct;

@end
