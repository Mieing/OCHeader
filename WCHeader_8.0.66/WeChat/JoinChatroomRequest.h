@class BaseRequest, NSString, ExportExternInfo, Lbs;

@interface JoinChatroomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (retain, nonatomic) Lbs *lbsInfo;
@property (retain, nonatomic) ExportExternInfo *externInfo;

+ (void)initialize;

@end
