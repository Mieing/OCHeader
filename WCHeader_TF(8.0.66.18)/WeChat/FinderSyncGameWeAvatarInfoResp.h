@class NSData, NSMutableArray;

@interface FinderSyncGameWeAvatarInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *eventInfoList;
@property (nonatomic) BOOL openWeavatar;
@property (retain, nonatomic) NSData *session;

+ (void)initialize;

@end
