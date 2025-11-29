@class NSData, NSString, WCFinderContact, MMFinderProfileLiveNoticeContext, WCFinderMemberCollectionInfo, WCFinderLiveNoticCardParams, MMFinderLiveContentVM, WCFinderMemberShipIntroducePushParams, NSMutableArray;
@protocol WCFinderMemberShipZoneIntroduceHeaderDataDelegate;

@interface WCFinderMemberShipZoneIntroduceHeaderData : NSObject <WCFinderLiveExt> {
    MMFinderProfileLiveNoticeContext *_liveNoticeContext;
}

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) BOOL isAuthor;
@property (copy, nonatomic) NSString *zoneTitle;
@property (copy, nonatomic) NSString *zoneDesc;
@property (copy, nonatomic) NSString *memberBenefitsURL;
@property (nonatomic) unsigned long long memberPrice;
@property (nonatomic) unsigned long long autoMemberPrice;
@property (retain, nonatomic) NSMutableArray *feedContentVMs;
@property (retain, nonatomic) NSMutableArray *playbackContentVMs;
@property (retain, nonatomic) NSMutableArray *activityContentVMs;
@property (nonatomic) unsigned long long otherVideoNum;
@property (nonatomic) unsigned long long otherLiveNum;
@property (nonatomic) unsigned long long totalActivityNum;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSData *respBuff;
@property (nonatomic) unsigned long long videoShortNum;
@property (nonatomic) unsigned long long liveShortNum;
@property (nonatomic) unsigned long long previewVideoLastUpdateTime;
@property (nonatomic) unsigned long long previewLiveLastUpdateTime;
@property (retain, nonatomic) MMFinderLiveContentVM *livingContentVM;
@property (retain, nonatomic) WCFinderLiveNoticCardParams *liveNoticeParams;
@property (retain, nonatomic) WCFinderMemberShipIntroducePushParams *pushParams;
@property (readonly, nonatomic) MMFinderProfileLiveNoticeContext *liveNoticeContext;
@property (weak, nonatomic) id<WCFinderMemberShipZoneIntroduceHeaderDataDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *moreVideoPreviewThumbURLArray;
@property (retain, nonatomic) NSMutableArray *moreLivePreviewThumbURLArray;
@property (nonatomic) BOOL autoRenewSwitch;
@property (retain, nonatomic) NSData *videoShortLastBuffer;
@property (retain, nonatomic) NSData *liveShortLastBuffer;
@property (retain, nonatomic) WCFinderMemberCollectionInfo *memberCollectionInfo;
@property (retain, nonatomic) NSMutableArray *statisticalInfoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)notifyChanged;
- (void)doNotifyChanged;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)a0;
- (void)onFinderLiveNoticeForFinderUsername:(id)a0 didChangeReservedState:(unsigned long long)a1 withNoticeIds:(id)a2 failureNoticeIds:(id)a3 opType:(unsigned long long)a4 aggregateType:(unsigned int)a5;
- (void)onFinderLiveNoticeForFinderUsername:(id)a0 hasPurchase:(BOOL)a1 noticeId:(id)a2 aggregateType:(unsigned int)a3;
- (void).cxx_destruct;

@end
