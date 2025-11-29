@class NSString;

@interface SECDecisionContext : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *namescope;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *module;

- (void).cxx_destruct;

@end
