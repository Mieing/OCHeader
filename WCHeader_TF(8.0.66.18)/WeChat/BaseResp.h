@class NSString;

@interface BaseResp : NSObject

@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errStr;
@property (nonatomic) int type;

- (id)init;
- (void).cxx_destruct;

@end
