@class WCAdFinderLiveNoticeInfo, WCDataItem, NSString, WCAdHalfScreenFinderLiveNoticeView;

@interface WCAdFinderLiveNoticeLogic : WCAdvertiseOperationLogicBase <WCAdHalfScreenFinderLiveNoticeViewDelegate>

@property (retain, nonatomic) WCAdFinderLiveNoticeInfo *adFinderLiveNoticeInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL isDetail;
@property (retain, nonatomic) WCAdHalfScreenFinderLiveNoticeView *reserveSuccessHalfScreenView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderLiveNoticeInfo:(id)a0 dataItem:(id)a1 isDetail:(BOOL)a2;
- (void)start;
- (void)doFinderLiveNoticeReserve;
- (void)showReserveSuccessView;
- (void)onConfirmButtonClick;
- (void).cxx_destruct;

@end
