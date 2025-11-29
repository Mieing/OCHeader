@class NSException;

@interface HMDFrameRecoverExceptionData : NSObject

@property (retain, nonatomic) NSException *exception;
@property (nonatomic) unsigned long long pc;

+ (id)dataWithException:(id)a0 landingPC:(unsigned long long)a1;

- (id)initWithException:(id)a0 landingPC:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;

@end
