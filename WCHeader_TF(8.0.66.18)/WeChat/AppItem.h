@class NSString, LabelInfo, DownloadInfo, HVAppInfo, NSMutableArray;

@interface AppItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *brief;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *packageName;
@property (nonatomic) unsigned int versionCode;
@property (retain, nonatomic) DownloadInfo *downloadInfo;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int appInfoFlag;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) BOOL isSubscribed;
@property (retain, nonatomic) NSMutableArray *label;
@property (nonatomic) BOOL isActive;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL isForceUpdate;
@property (nonatomic) BOOL hasDownloadGift;
@property (nonatomic) BOOL hasEnableChatroom;
@property (retain, nonatomic) LabelInfo *labelInfo;
@property (nonatomic) unsigned int appType;
@property (retain, nonatomic) HVAppInfo *hvappInfo;
@property (retain, nonatomic) NSMutableArray *tagList;

+ (void)initialize;

@end
