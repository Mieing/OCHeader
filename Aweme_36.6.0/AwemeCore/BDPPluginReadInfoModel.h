@class NSString;

@interface BDPPluginReadInfoModel : NSObject

@property (copy, nonatomic) NSString *reportedRouteId;
@property (copy, nonatomic) NSString *pluginId;
@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) BOOL isPkgExist;
@property (nonatomic) long long firstReadDuration;
@property (copy, nonatomic) NSString *readErrorMsg;
@property (nonatomic) long long readFrom;
@property (nonatomic) BOOL isAsync;

- (id)initWithPluginId:(id)a0 fileName:(id)a1;
- (void).cxx_destruct;

@end
