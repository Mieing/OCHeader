@protocol IESVdetectMonitorProtocol, IESVdetectAlogProtocol;

@interface IESVdetectService : NSObject

@property (retain, nonatomic) id<IESVdetectMonitorProtocol> monitorService;
@property (retain, nonatomic) id<IESVdetectAlogProtocol> alogService;

+ (id)defaultService;

- (void)registerMonitorService:(id)a0;
- (void)registerAlogService:(id)a0;
- (void).cxx_destruct;
- (void)registerServices;

@end
