@class NSString, FinderLiveNoticeInfo, FinderLiveNextLiveNotificationInfo, FinderLiveNoticeListInfo;

@interface WCFinderLiveNoticCardParams : NSObject

@property (nonatomic) BOOL isAuthor;
@property (retain, nonatomic) NSString *anchorUsername;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) FinderLiveNoticeListInfo *noticeList;
@property (retain, nonatomic) FinderLiveNextLiveNotificationInfo *nextLiveNoticeInfo;
@property (nonatomic) unsigned long long noticeOpenScene;

+ (id)paramsWithIsAuthor:(BOOL)a0 noticeInfo:(id)a1 noticeList:(id)a2 nextLiveNoticeInfo:(id)a3 anchorUsername:(id)a4;
+ (id)fromNoticeList:(id)a0 isAuthor:(BOOL)a1 anchorUsername:(id)a2;

- (BOOL)shouldShowNoticeCard;
- (void).cxx_destruct;

@end
