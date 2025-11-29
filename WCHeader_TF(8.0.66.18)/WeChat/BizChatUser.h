@class NSString, NSMutableArray;

@interface BizChatUser : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int ver;
@property (retain, nonatomic) NSString *headImageUrl;
@property (retain, nonatomic) NSString *profileUrl;
@property (nonatomic) unsigned int bitFlag;
@property (retain, nonatomic) NSString *addMemberUrl;
@property (retain, nonatomic) NSMutableArray *extItems;
@property (nonatomic) unsigned int userType;

+ (void)initialize;

@end
