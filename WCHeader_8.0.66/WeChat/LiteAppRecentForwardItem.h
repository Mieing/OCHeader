@class NSString;

@interface LiteAppRecentForwardItem : NSObject

@property (retain, nonatomic) NSString *nsEncryUserName;
@property (retain, nonatomic) NSString *nsNickName;
@property (retain, nonatomic) NSString *nsHeadImgUrl;
@property (retain, nonatomic) NSString *nsDefaultHeadImgUrl;

- (id)initWithUserName:(id)a0 nickName:(id)a1 headImageUrl:(id)a2 defaultHeadImageUrl:(id)a3;
- (id)toNSDictionary;
- (void).cxx_destruct;

@end
