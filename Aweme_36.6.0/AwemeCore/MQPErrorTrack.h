@class NSString;

@interface MQPErrorTrack : NSObject

@property (copy, nonatomic) NSString *errorType;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *errorDetail;

- (id)initWithError:(int)a0 code:(id)a1 description:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
