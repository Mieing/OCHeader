@class NSString, NSArray, NSDictionary;

@interface TTAccountChainLoginUserInfoModel : NSObject

@property (nonatomic) BOOL shouldSharedLogin;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSArray *avatarUrl;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *dTicket;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;

@end
