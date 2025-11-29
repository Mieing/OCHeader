@class MMFinderLiveReserveNoticeLogic, NSString;

@interface MMFinderLiveNoticeLogicHandle : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMFinderLiveReserveNoticeLogic *noticeReserveLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
