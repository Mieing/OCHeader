@class NSString;

@interface ScanCodeNormalOcrReporter : NSObject <ScanCodeOCRReporter, PBMessageObserverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
