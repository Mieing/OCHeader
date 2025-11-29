@class NSString;

@interface BDPPluginLoadInfoModel : NSObject

@property (copy, nonatomic) NSString *reportedRouteId;
@property (copy, nonatomic) NSString *pluginId;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) long long excuteDuration;
@property (copy, nonatomic) NSString *excuteErrorMsg;
@property (nonatomic) long long excuteFrom;
@property (nonatomic) BOOL isAsync;

- (id)initWithPluginId:(id)a0;
- (void).cxx_destruct;

@end
