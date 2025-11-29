@class NSString, AWEMRSideBarNoticeBadgeInfoModel;

@interface AWEMRSideBarBagdeStrategyResultModel : NSObject <AWEMessageReachSideBarBadgeStrategyResultProtocol>

@property (nonatomic) long long requestResult;
@property (retain, nonatomic) AWEMRSideBarNoticeBadgeInfoModel *noticeEntranceBadgeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
