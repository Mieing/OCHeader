@class NSString;
@protocol MMFinderLiveNoticeMoreViewItemDelegate;

@interface MMFinderLiveNoticeMoreViewItem : NSObject <MMFinderLiveNoticeListViewItem>

@property (weak, nonatomic) id<MMFinderLiveNoticeMoreViewItemDelegate> delegate;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isLoading;
@property (copy, nonatomic) NSString *tips;
@property (readonly, nonatomic) Class cellClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdate;
- (void).cxx_destruct;

@end
