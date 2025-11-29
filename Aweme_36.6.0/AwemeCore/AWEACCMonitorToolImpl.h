@class NSString;

@interface AWEACCMonitorToolImpl : NSObject <ACCMonitorToolProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithTitle:(id)a0 error:(id)a1 extra:(id)a2 owner:(id)a3 options:(long long)a4;
+ (void)reportToFeishu:(id)a0;
+ (void)reportOnlineWithTitle:(id)a0 error:(id)a1 extra:(id)a2;
+ (void)appendMsgWithTitle:(id)a0 error:(id)a1 extra:(id)a2 owner:(id)a3 options:(long long)a4;


@end
