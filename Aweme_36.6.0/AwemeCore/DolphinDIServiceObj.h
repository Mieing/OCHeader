@class NSString, NSMutableDictionary;

@interface DolphinDIServiceObj : NSObject

@property (copy, nonatomic) NSString *protocolKey;
@property (retain, nonatomic) Class serviceClass;
@property (retain, nonatomic) NSMutableDictionary *registerKeyCenter;
@property (retain, nonatomic) NSMutableDictionary *serviceCenter;

- (id)initWithProtocolKey:(id)a0;
- (BOOL)bindService:(Class)a0;
- (BOOL)unbindService;
- (BOOL)bindService:(Class)a0 forKey:(id)a1;
- (BOOL)unbindServiceForKey:(id)a0;
- (id)getServiceForKey:(id)a0;
- (void).cxx_destruct;
- (id)getService;

@end
