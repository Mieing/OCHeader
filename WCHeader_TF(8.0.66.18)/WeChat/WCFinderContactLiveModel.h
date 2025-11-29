@class FinderLiveInfo, FinderLiveNoticeInfo, WCFinderDataItem, FinderLiveNoticeListInfo;

@interface WCFinderContactLiveModel : NSObject

@property (nonatomic) unsigned long long liveStatus;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) FinderLiveNoticeListInfo *noticeList;
@property (retain, nonatomic) FinderLiveInfo *liveInfo;
@property (retain, nonatomic) WCFinderDataItem *dataItem;

- (void).cxx_destruct;

@end
