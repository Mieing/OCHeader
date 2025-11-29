@class NSString;

@interface MegaVideoPlayReportSessionCpp : UnitRCObjcBaseProxyClass <MegaVideoPlayReportSession>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genSessionId;
+ (id)createSession;

- (id)sessionId;
- (void)report:(id)a0;

@end
