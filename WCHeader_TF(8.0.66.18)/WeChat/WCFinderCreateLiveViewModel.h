@class FinderLiveNoticeInfo, NSArray, WCFinderCreateLivePrepareResponseModel, NSString, NSDate, WCFinderCreateLivePrepareResponseFailModel, NSMutableArray;

@interface WCFinderCreateLiveViewModel : NSObject

@property (retain, nonatomic) WCFinderCreateLivePrepareResponseModel *prepareResponseModel;
@property (retain, nonatomic) WCFinderCreateLivePrepareResponseFailModel *prepareResponseFailModel;
@property (retain, nonatomic) NSArray *liveNoticeList;
@property (nonatomic) BOOL isCreateLivePrepareChecked;
@property (nonatomic) BOOL isCreateLivePrepareSuccessChecked;
@property (retain, nonatomic) NSString *descriptionPromptWording;
@property (retain, nonatomic) NSMutableArray *waittingBlocks;
@property (retain, nonatomic) NSDate *bookingTime;
@property (retain, nonatomic) NSMutableArray *dayArrs;
@property (retain, nonatomic) NSMutableArray *specificDayArrs;
@property (retain, nonatomic) NSDate *specificDate;
@property (copy, nonatomic) id /* block */ createLivePrePareBlock;
@property (nonatomic) BOOL enableDescExtend;
@property (nonatomic) long long createLivePageMode;
@property (nonatomic) unsigned long long role;
@property (nonatomic) int createLivePrepareReqScene;
@property (retain, nonatomic) FinderLiveNoticeInfo *modNoticeInfo;
@property (copy, nonatomic) id /* block */ createNoticePrePareBlock;

+ (id)getNoticeIdsDesc:(id)a0;

- (id)init;
- (id)initWithCreateLiveWithRole:(unsigned long long)a0 prePareBlock:(id /* block */)a1 reqScene:(int)a2;
- (id)initWithCreateLivePrePareBlock:(id /* block */)a0;
- (id)initWithCreateLivePrePareBlock:(id /* block */)a0 reqScene:(int)a1;
- (id)initWithCreateLiveWithModNotice:(id)a0 prePareBlock:(id /* block */)a1;
- (void)checkLiveNoticeInfo;
- (void)udpateDefaultDescriptionPromptWording;
- (void)invokeWaittingNoticeInfoBlocks;
- (void)fetchCreateLiveNoticeInfo:(id /* block */)a0 complete:(id /* block */)a1;
- (void)createStandardLiveNoticeWithStartTime:(id)a0 topic:(id)a1 introduction:(id)a2 paymentSetting:(id)a3 couponsStockIDs:(id)a4 aggregateType:(int)a5 triggerType:(int)a6 reportingSourceScene:(unsigned long long)a7 completionHandler:(id /* block */)a8;
- (void)createQuickLiveNoticeWithExpirationTime:(id)a0 topic:(id)a1 introduction:(id)a2 reportingSourceScene:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)modNoticeWithWithNewNoticeInfo:(id)a0 modifyFieldFlag:(unsigned long long)a1 modifyReason:(id)a2 reportingSourceScene:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)setBookingTimeWithSelectedDayComponent:(long long)a0 hourComponent:(long long)a1 minuteComponent:(long long)a2;
- (id)getNoticeDefaultStartTime;
- (id)getNoticeStartTimeWithSelectedDayComponent:(long long)a0 hourComponent:(long long)a1 minuteComponent:(long long)a2;
- (id)quickNoticeExpirationTimeForCurrentTime:(id)a0;
- (id)getHourArrWithDayComponent:(long long)a0;
- (id)getDatePickerData;
- (void)genDayComponentIfNeed;
- (id)dayComponent;
- (id)getHourDataWithDayComponent:(long long)a0;
- (id)getMinuteDataWithDayComponent:(long long)a0 hourComponent:(long long)a1;
- (id)getMinuteArrWithDayComponent:(long long)a0 hourComponent:(long long)a1;
- (long long)getNearestIndexWithTarggetItem:(id)a0 itemList:(id)a1;
- (void)genSpecificComponent:(double)a0;
- (id)getSpecificDatePickerData:(double)a0;
- (id)getSpecificHourDataWithDayComponent:(long long)a0;
- (id)getSpecificMinuteDataWithDayComponent:(long long)a0 hourComponent:(long long)a1;
- (id)getSpecificMinuteArrWithDayComponent:(long long)a0 hourComponent:(long long)a1;
- (id)getSpecificHourArrWithDayComponent:(long long)a0;
- (id)getSpecificNoticeStartTimeWithSelectedDayComponent:(long long)a0 hourComponent:(long long)a1 minuteComponent:(long long)a2;
- (void).cxx_destruct;

@end
