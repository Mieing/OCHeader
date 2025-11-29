@class NSString;

@interface QQBaseResp : NSObject

@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *errorDescription;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *extendInfo;

- (void).cxx_destruct;
- (void)dealloc;

@end
