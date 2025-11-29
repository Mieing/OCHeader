@class NSDictionary;

@interface AWETokamakANR : NSObject

@property BOOL isReporterReady;
@property (retain, nonatomic) NSDictionary *lastSessionANRInfo;
@property (nonatomic) BOOL detectedLastANR;

+ (id)shared;

- (void)onReporterReady;
- (void)monitorLastSessionARN;
- (void)reportANRInLastSession;
- (void)reportANRInCurrentSession:(id)a0;
- (void)monitorCurrentSessionANR:(id /* block */)a0;
- (void).cxx_destruct;
- (void)start;

@end
