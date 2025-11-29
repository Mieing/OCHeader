@class WCFinderLiveNoticCardParams, NSString, MMFinderLiveContentVM, WCFinderMemberShipZonePushParams, MMFinderProfileLiveNoticeContext, NSMutableArray, WCFinderContact;
@protocol WCFinderMemberShipZoneHeaderDataDelegate;

@interface WCFinderMemberShipZoneHeaderData : NSObject <WCFinderLiveExt> {
    MMFinderProfileLiveNoticeContext *_liveNoticeContext;
}

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) BOOL isAuthor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *zoneDesc;
@property (copy, nonatomic) NSString *memberBenefitsURL;
@property (nonatomic) BOOL allowPost;
@property (nonatomic) BOOL allowLive;
@property (nonatomic) unsigned long long memberCount;
@property (retain, nonatomic) NSMutableArray *statisticalInfoList;
@property (retain, nonatomic) MMFinderLiveContentVM *livingContentVM;
@property (retain, nonatomic) WCFinderLiveNoticCardParams *liveNoticeParams;
@property (retain, nonatomic) WCFinderMemberShipZonePushParams *pushParams;
@property (readonly, nonatomic) MMFinderProfileLiveNoticeContext *liveNoticeContext;
@property (weak, nonatomic) id<WCFinderMemberShipZoneHeaderDataDelegate> delegate;
@property (nonatomic) BOOL allowActivity;
@property (copy, nonatomic) NSString *memberCenterURL;
@property (nonatomic) BOOL isBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)isEqualToHeaderData:(id)a0;
- (void)notifyChanged;
- (void)doNotifyChanged;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)a0;
- (void)onFinderLiveNoticeForFinderUsername:(id)a0 didChangeReservedState:(unsigned long long)a1 withNoticeIds:(id)a2 failureNoticeIds:(id)a3 opType:(unsigned long long)a4 aggregateType:(unsigned int)a5;
- (void)onFinderLiveNoticeForFinderUsername:(id)a0 hasPurchase:(BOOL)a1 noticeId:(id)a2 aggregateType:(unsigned int)a3;
- (void).cxx_destruct;

@end
