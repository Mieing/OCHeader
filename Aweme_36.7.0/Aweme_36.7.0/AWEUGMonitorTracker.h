@class NSString;

@interface AWEUGMonitorTracker : NSObject <AWEUGActivityMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitorService:(id)a0 status:(unsigned long long)a1 level:(unsigned long long)a2 errorCode:(long long)a3 errorDesc:(id)a4 extraInfo:(id)a5;


@end
