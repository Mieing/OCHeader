@class NSException;

@interface HMDUserNSExceptionParameter : HMDUserExceptionParameter

@property (retain, nonatomic) NSException *catchException;

+ (id)initNSExceptionParameterWithExceptionType:(id)a0 catchException:(id)a1 customParams:(id)a2 filters:(id)a3;

- (void).cxx_destruct;

@end
