@class NSString;

@interface SliceErrorInfo : NSObject

@property (nonatomic) long long sliceErrorCode;
@property (retain, nonatomic) id serverResponse;
@property (retain, nonatomic) NSString *serverConfig;

- (id)initWithInfo:(long long)a0 serverResponse:(id)a1 config:(id)a2;
- (void).cxx_destruct;

@end
