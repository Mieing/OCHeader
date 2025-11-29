@class NSString, NSDictionary;

@interface AWEYAPJSBLogBase : NSObject

@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *requestURL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *methodName;
@property (nonatomic) unsigned long long messageType;
@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) NSDictionary *response;
@property (nonatomic) long long code;
@property (nonatomic) long long level;

+ (id)extractBaseURL:(id)a0;
+ (BOOL)isHit:(id)a0;

- (void)sendJSBLog;
- (void).cxx_destruct;

@end
