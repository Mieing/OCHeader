@class NSString;

@interface IESLivePinCommentMicoAppParams : NSObject

@property (copy, nonatomic) NSString *apptitle;
@property (copy, nonatomic) NSString *appDescription;
@property (copy, nonatomic) NSString *appCoverUrl;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *microAppId;

- (void).cxx_destruct;

@end
