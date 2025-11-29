@class NSString, FinderLiveNoticeInfo;
@protocol WCFinderLiveNoticeCellViewModelDelegate;

@interface WCFinderLiveNoticeCellViewModel : NSObject <WCFinderLiveExt, WCFinderContactExt>

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) NSString *noticeTitle;
@property (nonatomic) BOOL shouldShowNoticeInfo;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) unsigned long long reserveState;
@property (weak, nonatomic) id<WCFinderLiveNoticeCellViewModelDelegate> delegate;
@property (nonatomic) BOOL hasShowFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (id)initWithFinderUsername:(id)a0 liveNoticeInfo:(id)a1;
- (id)initWithFinderUsername:(id)a0 liveNoticeInfo:(id)a1 enableUsernameExtension:(BOOL)a2;
- (id)copy;
- (void)updateLiveNoticeInfo:(id)a0;
- (void)onFinderLiveNoticeWithNoticeId:(id)a0 reserveStateChanged:(unsigned long long)a1;
- (void)onFinderLiveNoticeWithNoticeId:(id)a0 hasPurchaseStateChanged:(BOOL)a1;
- (void)onFinderLiveNoticeForFinderUsername:(id)a0 isTop:(BOOL)a1 noticeId:(id)a2;
- (void)onLiveNoticeReserveStateChanged:(id)a0 info:(id)a1 error:(id)a2;
- (BOOL)isNoticeInfoStateChange:(id)a0;
- (void)onFinderContactLiveUpdateWithNoticeInfo:(id)a0 noticeList:(id)a1 commentScene:(int)a2;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
