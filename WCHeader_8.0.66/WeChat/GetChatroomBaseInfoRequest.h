@class BaseRequest, NSString, ExportExternInfo, DebugOption, Lbs;

@interface GetChatroomBaseInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (retain, nonatomic) Lbs *lbsInfo;
@property (retain, nonatomic) ExportExternInfo *exportExternInfo;
@property (retain, nonatomic) DebugOption *debugOption;

+ (void)initialize;

@end
