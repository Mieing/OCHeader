@class NSString, FinderLivePurchaseInfo;

@interface FinderLiveExportObjectForJoinLive : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *streamUrl;
@property (retain, nonatomic) NSString *description;
@property (nonatomic) unsigned int secondaryDeviceFlag;
@property (retain, nonatomic) FinderLivePurchaseInfo *purchaseInfo;
@property (retain, nonatomic) NSString *sessionBuffer;

+ (void)initialize;

@end
