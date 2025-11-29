@class NSString;

@interface AWEIMOfficialNotificationSettingSubscribeCellViewModel : AWEIMOfficialNotificationSettingCellViewModel

@property (copy, nonatomic) NSString *subscribeActionSelectedCellTitle;
@property (nonatomic) BOOL enableCommonSubscribeExp;

- (void)onArrowTapped;
- (void)onNoticeSubscribeStateChange:(id)a0;
- (void).cxx_destruct;

@end
