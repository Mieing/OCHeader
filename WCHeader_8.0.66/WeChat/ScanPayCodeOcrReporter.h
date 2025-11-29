@class NSString;

@interface ScanPayCodeOcrReporter : NSObject <ScanCodeOCRReporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needReport:(id)a0;
- (void)reportOcr:(id)a0 withOcrResult:(id)a1;

@end
