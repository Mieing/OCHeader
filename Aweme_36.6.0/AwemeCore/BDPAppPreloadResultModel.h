@class NSString, BDPSchema;

@interface BDPAppPreloadResultModel : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) BDPSchema *schema;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long versionState;

- (void).cxx_destruct;

@end
