@class NSDictionary;

@interface IESLiveModuleOrderProvider : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSDictionary *remoteOrderConfig;

- (id)updateModuleOrderWithKey:(id)a0 moduleList:(id)a1;
- (id)orderWithModuleList:(id)a0 orderList:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
