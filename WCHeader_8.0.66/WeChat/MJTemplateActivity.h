@class NSDictionary, NSString;

@interface MJTemplateActivity : NSObject <MMAssetPickerUserActionTipsProtocol>

@property (copy, nonatomic) NSDictionary *activityInfo;
@property (nonatomic) BOOL isValid;
@property (nonatomic) long long beginTime;
@property (nonatomic) long long endTime;
@property (nonatomic) double maxDisplayDuration;
@property (nonatomic) long long maxDisplayTimesPerDay;
@property (nonatomic) long long minDisplayInterval;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) long long maasEventType;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL isUserActionManuallyCheckedOnTipsShow;
@property (nonatomic) BOOL shouldRemoveOnPickerAppear;
@property (retain, nonatomic) NSString *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void)reloadData;
- (void)didShowTips;
- (void)didClickTips;
- (void)didClickCloseTipsButton;
- (BOOL)canShowTips;
- (id)displayTips;
- (double)tipsDisplayDuration;
- (BOOL)isTipsMeetExpectations;
- (void)doActivityReport:(unsigned long long)a0;
- (void).cxx_destruct;

@end
