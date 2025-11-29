@class NSString;

@interface GetUrlInfoReqSession : NSObject

@property (retain, nonatomic) NSString *sessionName;
@property (nonatomic) unsigned int sessionType;
@property (retain, nonatomic) NSString *objId;
@property (retain, nonatomic) NSString *msgUserName;

+ (id)singleChat:(id)a0;
+ (id)groupChat:(id)a0 msgUserName:(id)a1;
+ (id)sns:(id)a0 snsId:(id)a1;
+ (id)web:(id)a0;
+ (id)miniapp:(id)a0;

- (void).cxx_destruct;

@end
