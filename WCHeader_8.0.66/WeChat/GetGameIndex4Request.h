@class BaseRequest, NSString, EntranceRedDot, NSMutableArray;

@interface GetGameIndex4Request : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSMutableArray *installedAppList;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) EntranceRedDot *entranceRedDot;
@property (nonatomic) unsigned int unReadMsgCount;
@property (nonatomic) BOOL fromEntrance;
@property (nonatomic) unsigned int releaseChannel;

+ (void)initialize;

@end
