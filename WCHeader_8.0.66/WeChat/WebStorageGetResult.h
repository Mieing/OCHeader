@class NSString;

@interface WebStorageGetResult : NSObject

@property (nonatomic) BOOL bError;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *weightStr;
@property (nonatomic) long long expireTime;

- (void).cxx_destruct;

@end
