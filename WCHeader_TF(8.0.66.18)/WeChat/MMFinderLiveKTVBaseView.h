@class MMFinderLiveConnectMicUsersInfo, NSString, WCFinderDataItem, MMFinderLiveKTVReporter, MMFinderLiveKTVBox;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVBaseView : UIView

@property (retain, nonatomic) id<MMLiveUniqueTaskId> taskId;
@property (retain, nonatomic) MMFinderLiveKTVReporter *reporter;
@property (readonly, nonatomic) MMFinderLiveKTVBox *ktvBox;
@property (readonly, nonatomic) NSString *anchorSdkUserId;
@property (readonly, nonatomic) WCFinderDataItem *finderDataItem;
@property (readonly, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo;

+ (double)getAdaptedValue:(double)a0;
+ (double)getAdaptedRatio;

- (id)initWithTaskId:(id)a0;
- (id)getSingerContact;
- (id)ktvReporter;
- (void).cxx_destruct;

@end
