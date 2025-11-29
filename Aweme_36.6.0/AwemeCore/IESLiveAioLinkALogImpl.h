@class NSString;

@interface IESLiveAioLinkALogImpl : NSObject <IESLiveAioLinkALog>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendALogWithLevel:(long long)a0 tag:(id)a1 message:(id)a2 throwable:(id)a3 extra:(id)a4;

@end
