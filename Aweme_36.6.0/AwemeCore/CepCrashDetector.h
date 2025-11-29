@class NSString;

@interface CepCrashDetector : NSObject <CepCrashDetectorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initCrashDetector;


@end
