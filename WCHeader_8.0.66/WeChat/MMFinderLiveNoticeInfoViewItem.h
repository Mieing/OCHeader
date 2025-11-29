@class NSString, FinderLiveNoticeInfo;
@protocol MMFinderLiveNoticeInfoViewItemDelegate;

@interface MMFinderLiveNoticeInfoViewItem : NSObject <WCFinderLiveExt, MMFinderLiveNoticeListViewItem>

@property (weak, nonatomic) id<MMFinderLiveNoticeInfoViewItemDelegate> delegate;
@property (readonly, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (readonly, nonatomic) NSString *finderUserName;
@property (readonly, nonatomic) BOOL isAuthor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class cellClass;

- (id)initWithNoticeInfo:(id)a0 isAuthor:(BOOL)a1 finderUserName:(id)a2;
- (void)didUpdate;
- (void)onFinderLiveNoticeWithNoticeId:(id)a0 reserveStateChanged:(unsigned long long)a1;
- (void)onFinderLiveNoticeWithNoticeId:(id)a0 hasPurchaseStateChanged:(BOOL)a1;
- (void)onFinderLiveNoticeForFinderUsername:(id)a0 isTop:(BOOL)a1 noticeId:(id)a2;
- (void).cxx_destruct;

@end
