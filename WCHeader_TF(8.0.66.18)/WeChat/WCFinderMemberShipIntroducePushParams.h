@class NSString, NSNumber;

@interface WCFinderMemberShipIntroducePushParams : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) int profileEnterType;
@property (nonatomic) long long qrcodeScene;
@property (copy, nonatomic) NSString *liveNoticeEncryptedId;
@property (copy, nonatomic) NSString *promoterToken;
@property (nonatomic) BOOL showsMoreNoticesAutomatically;
@property (nonatomic) BOOL showsNoticeToastAutomatically;
@property (nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically;
@property (copy, nonatomic) NSString *redirectFeedID;
@property (nonatomic) unsigned long long entranceSource;
@property (nonatomic) BOOL unableShowLiveMinimizeWindow;
@property (nonatomic) BOOL isPreviewMode;
@property (retain, nonatomic) NSNumber *fromSourceSceneForReport;

+ (id)paramWithUsername:(id)a0 redirectFeedID:(id)a1;

- (BOOL)isAuthor;
- (void).cxx_destruct;

@end
