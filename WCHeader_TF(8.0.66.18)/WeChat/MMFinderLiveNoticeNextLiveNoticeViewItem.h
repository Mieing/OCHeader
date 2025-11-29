@class NSString, FinderLiveNextLiveNotificationInfo;
@protocol MMFinderLiveNoticeNextLiveNoticeViewItemDelegate;

@interface MMFinderLiveNoticeNextLiveNoticeViewItem : NSObject <MMFinderLiveNoticeListViewItem>

@property (weak, nonatomic) id<MMFinderLiveNoticeNextLiveNoticeViewItemDelegate> delegate;
@property (retain, nonatomic) FinderLiveNextLiveNotificationInfo *nextLiveNoticeInfo;
@property (readonly, nonatomic) NSString *finderUserName;
@property (readonly, nonatomic) BOOL isAuthor;
@property (readonly, nonatomic) Class cellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNextLiveNoticeInfo:(id)a0 isAuthor:(BOOL)a1 finderUserName:(id)a2;
- (void).cxx_destruct;

@end
