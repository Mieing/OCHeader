@class NSDictionary, NSString;

@interface IESLLPOITempoLogger : NSObject <TempoiOS.TempoLogRecipient>

@property (retain, nonatomic) NSDictionary *commonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logWithLog:(id)a0;
- (void)logMessageWithMessage:(id)a0;
- (void)logLoadResultWithStatus:(BOOL)a0 url:(id)a1 metrics:(id)a2;
- (void)updateCommonParamsWithParams:(id)a0;
- (void).cxx_destruct;

@end
