@class NSString;

@interface TPBeaconReportWrapper : NSObject <ITPReportWrapper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initBeaconSDK;
+ (void)setupGuid:(id)a0;

- (void)reportEvent:(id)a0 withParams:(id)a1;

@end
