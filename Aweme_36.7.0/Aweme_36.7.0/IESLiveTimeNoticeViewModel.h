@class NSMutableDictionary, HTSEventContext, NSString, IESLiveOpenLiveBroadcastConfig, NSDate, NSNumber, NSArray;
@protocol IESLiveAnnouncementTimeNoticeReaction;

@interface IESLiveTimeNoticeViewModel : NSObject

@property (retain, nonatomic) IESLiveOpenLiveBroadcastConfig *broadcastConf;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *hour;
@property (copy, nonatomic) NSString *minute;
@property (retain, nonatomic) NSNumber *stickerSwitch;
@property (retain, nonatomic) NSNumber *profileSwitch;
@property (retain, nonatomic) NSArray *selectedDays;
@property (retain, nonatomic) NSMutableDictionary *headerText;
@property (weak, nonatomic) id<IESLiveAnnouncementTimeNoticeReaction> reaction;

- (id)scheduleDays;
- (void)trackerSettingPanelShow:(BOOL)a0;
- (id)datesStringWithSelectedDays:(id)a0;
- (id)initWithSettingModel:(id)a0;
- (id)strWithWeekDay:(long long)a0;
- (void)onWeekConfirmButtonTapped;
- (void)userSelectDays:(id)a0;
- (void)onTimeCancelButtonTapped;
- (void)onTimeConfirmButtonTapped;
- (void)userSelectHour:(id)a0 minute:(id)a1 date:(id)a2;
- (void)parsePropertyWithModel:(id)a0;
- (BOOL)isScheduledDateExpiredThanCurrent:(id)a0;
- (id)scheduledFullTimeString;
- (id)scheduledDateString;
- (id)dateStringWithDayString:(id)a0;
- (void).cxx_destruct;
- (void)setupActions;
- (id)settingModel;

@end
