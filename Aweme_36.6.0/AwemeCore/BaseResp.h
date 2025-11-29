@class NSString;

@interface BaseResp : NSObject

@property (nonatomic) int errCode;
@property (copy, nonatomic) NSString *errStr;
@property (nonatomic) int type;

- (void).cxx_destruct;

@end
