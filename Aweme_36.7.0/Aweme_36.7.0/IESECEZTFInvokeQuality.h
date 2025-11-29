@class NSString;

@interface IESECEZTFInvokeQuality : NSObject

@property (nonatomic) BOOL jsEnable;
@property (nonatomic) BOOL jsSuccess;
@property (nonatomic) BOOL nativeError;
@property (copy, nonatomic) NSString *errorReason;
@property (copy, nonatomic) NSString *nativeErrorReason;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) double start;
@property (nonatomic) double end;

- (void).cxx_destruct;

@end
