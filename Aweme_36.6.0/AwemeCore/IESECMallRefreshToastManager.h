@class NSMutableDictionary, NSCalendar;

@interface IESECMallRefreshToastManager : NSObject

@property (nonatomic) long long dayShowCount;
@property (nonatomic) long long hideShowCount;
@property (retain, nonatomic) NSMutableDictionary *refreshToastRecord;
@property (nonatomic) long long currentDay;
@property (retain, nonatomic) NSCalendar *calendar;
@property (nonatomic) BOOL needMonitor;
@property (nonatomic) long long clickIndex;
@property (nonatomic) BOOL toastIsClicked;

- (id)initWithPageName:(id)a0;
- (void)updateClickIndexWithParamModel:(id)a0;
- (void)checkScrollSpeedWithScrollView:(id)a0 popupView:(id)a1;
- (void)checkShowWithIndex:(long long)a0 popupView:(id)a1;
- (void)readRefreshToastRecord;
- (void)showRefreshToastWithPopupView:(id)a0 reason:(id)a1;
- (void)saveRefreshRecord;
- (void).cxx_destruct;
- (void)startMonitor;

@end
