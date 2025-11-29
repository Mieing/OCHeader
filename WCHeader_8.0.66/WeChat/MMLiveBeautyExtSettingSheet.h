@class NSString, MMLiveTaskId, MMLiveBeautyExtSettingCard;

@interface MMLiveBeautyExtSettingSheet : MMPageSheetBaseView <MMLiveBeautyExtSettingCardDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMLiveBeautyExtSettingCard *faceOccuSettingCard;
@property (nonatomic) int entry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithTaskId:(id)a0 entry:(int)a1;
+ (id)showChangeFilterNoticeViewWith:(id)a0 entry:(int)a1;
+ (id)showWithTaskId:(id)a0;
+ (id)showChangeFilterNoticeViewWith:(id)a0;

- (id)initWithTaskId:(id)a0;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateNavBarUI;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (id)liveTask;
- (id)beautyLogic;
- (BOOL)isInRoom;
- (void)switchDidChanged:(BOOL)a0 card:(id)a1;
- (void).cxx_destruct;

@end
