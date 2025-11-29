@class NSDictionary, NSURL, NSString;

@interface QBWebItemEvent : NSObject

@property (nonatomic) long long eventType;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSURL *mainDocumentURL;
@property (retain, nonatomic) NSString *HTTPMethod;
@property (retain, nonatomic) NSString *errorDescription;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long directType;
@property (nonatomic) int apnType;
@property (weak, nonatomic) id webview;

+ (id)eventWithType:(long long)a0 userInfo:(id)a1;
+ (id)descriptionForTimestamp:(double)a0;

- (id)JSONInfo;
- (id)eventName;
- (id)validJSONUserInfo;
- (void).cxx_destruct;

@end
