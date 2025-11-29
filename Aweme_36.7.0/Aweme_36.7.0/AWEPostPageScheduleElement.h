@class NSTimeZone, NSString, AWENewPublishTableCell, NSDateFormatter, NSDate;
@protocol AWEPostPagePOIService, AWEPostPagePrivacyService;

@interface AWEPostPageScheduleElement : AWEPublishAndAdvanceSettingsPopupBaseCellElement <AWEPublishAndAdvanceSettingsPopupElementProtocol>

@property (retain, nonatomic) AWENewPublishTableCell *scheduleCell;
@property (copy, nonatomic) NSString *indicatorText;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) id<AWEPostPagePrivacyService> privacyService;
@property (retain, nonatomic) id<AWEPostPagePOIService> localLifePOIService;
@property (nonatomic) BOOL hasLocalLifeOrder;
@property (retain, nonatomic) NSDate *selectedScheduleDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (void)setupCustomSceneRule:(id)a0 context:(id)a1;
+ (id)type;

- (void)setupCell:(id)a0;
- (id)advanceSettingsPopupItemConfig;
- (void)contextDidReady;
- (BOOL)shouldNotSupportLocalLifeOrder;
- (void)updateLocalLifeOrderStatus:(BOOL)a0;
- (void)trackSelectAction;
- (void)updateSchedulePostDateWithResult:(id)a0;
- (void)refreshCell;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (id)cell;
- (void)didSelect;

@end
