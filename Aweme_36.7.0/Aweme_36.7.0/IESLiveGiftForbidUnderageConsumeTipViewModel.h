@class NSString, IESLiveGiftPanelDataSharing;

@interface IESLiveGiftForbidUnderageConsumeTipViewModel : NSObject

@property (retain, nonatomic) NSString *tipText;
@property (nonatomic) unsigned long long gapDays;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (copy, nonatomic) id /* block */ closeBlock;

+ (BOOL)shouldShow:(id)a0;

- (void)didSetAttachingDIContext;
- (id)initWithDataSharing:(id)a0;
- (void)trackForbidUnderageConsumeTipOnClose;
- (void)startGapSomeDays;
- (void)fetchTipShowSettings;
- (void)trackForbidUnderageConsumeTipOnShow;
- (void).cxx_destruct;

@end
