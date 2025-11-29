@class BaseRequest, NSString, NSMutableArray;

@interface FinderLiveVisibilityOrChargeSettingsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) NSMutableArray *chatroomList;
@property (retain, nonatomic) NSMutableArray *userList;

+ (void)initialize;

@end
