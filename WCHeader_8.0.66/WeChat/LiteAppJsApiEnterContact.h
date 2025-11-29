@class NSString;

@interface LiteAppJsApiEnterContact : LiteAppJsApi

@property (copy, nonatomic) NSString *targetAppId;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *sessionFrom;
@property (copy, nonatomic) NSString *businessID;
@property (nonatomic) BOOL showMessageCard;
@property (copy, nonatomic) NSString *sendMsgTitle;
@property (copy, nonatomic) NSString *sendMsgPath;
@property (copy, nonatomic) NSString *sendMsgImageURL;
@property (copy, nonatomic) NSString *headimgUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)enterSession:(id)a0;
- (void).cxx_destruct;

@end
