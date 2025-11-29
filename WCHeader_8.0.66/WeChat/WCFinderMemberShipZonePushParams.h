@class NSString;

@interface WCFinderMemberShipZonePushParams : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) int profileEnterType;
@property (nonatomic) long long qrcodeScene;
@property (copy, nonatomic) NSString *liveNoticeEncryptedId;
@property (copy, nonatomic) NSString *promoterToken;
@property (nonatomic) BOOL showsMoreNoticesAutomatically;
@property (nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically;
@property (copy, nonatomic) NSString *adParamInfoStr;
@property (copy, nonatomic) NSString *redirectFeedID;
@property (nonatomic) BOOL showHalfScreen;
@property (nonatomic) BOOL unableShowLiveMinimizeWindow;
@property (nonatomic) unsigned long long entranceSource;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) BOOL isPreviewMode;

+ (id)paramWithUsername:(id)a0 redirectFeedID:(id)a1;

- (BOOL)isAuthor;
- (void).cxx_destruct;

@end
