@class NSString;

@interface WATransferParamsModel : NSObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *args;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *jsapiType;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *pathQeury;
@property (nonatomic) unsigned int debugMode;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *instanceId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *title;

- (id)toData;
- (void).cxx_destruct;

@end
