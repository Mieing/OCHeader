@class NSString, NSError;

@interface MMMusicPlayerErrInfo : NSObject

@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) long long ksAudioPlayerErrorType;
@property (copy, nonatomic) NSError *innerError;

- (id)description;
- (void).cxx_destruct;

@end
