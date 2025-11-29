@class NSData, NSString, NSArray;

@interface MATraceResponse : NSObject

@property (retain, nonatomic) NSData *responseData;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSString *memo;
@property (readonly, nonatomic) int code;
@property (readonly, nonatomic) NSArray *points;

- (id)initWithResposeData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
