@class NSString, IESECMallChannelEnterModel, NSMutableDictionary;
@protocol IESECMallTabTrackerManagerDelegate;

@interface IESECMallTabTrackerManager : NSObject <IESECMallPerfService>

@property (nonatomic) double lastEnterTimeInterval;
@property (copy, nonatomic) NSString *lastTabId;
@property (retain, nonatomic) IESECMallChannelEnterModel *lastEnterModel;
@property (copy, nonatomic) NSString *currentTabId;
@property (retain, nonatomic) IESECMallChannelEnterModel *currentEnterModel;
@property (nonatomic) BOOL isInBottomMall;
@property (retain, nonatomic) NSMutableDictionary *tabMemoryUsageDict;
@property (retain, nonatomic) NSMutableDictionary *enterMethodDict;
@property (retain, nonatomic) NSMutableDictionary *mallTabCrossSlideDict;
@property (retain, nonatomic) NSMutableDictionary *mallTabCrossSlideParamsDict;
@property (weak, nonatomic) id<IESECMallTabTrackerManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackerMallTabFisrtScreenWithTabId:(id)a0 openTime:(long long)a1 realOpenTime:(long long)a2 firstScreenTime:(long long)a3 realFirstScreenTime:(long long)a4;
- (void)trackerEnterMallTabWithTabId:(id)a0 enterModel:(id)a1;
- (id)getMallTabScrollEventParams:(id)a0;
- (void)trackerMallTabScrollWithParams:(id)a0;
- (void)setMallTabScrollEventParams:(id)a0;
- (void)bottomBarChangeNoVisible:(id)a0;
- (void)trackerMallTabStayTimeWithTabId:(id)a0 duration:(double)a1 enterModel:(id)a2;
- (void)trackerMallTabStayTimeWithTabId:(id)a0 duration:(double)a1 enterModel:(id)a2 enterBacground:(BOOL)a3;
- (void)realTrackerEnterMallTabWithTabId:(id)a0 enterModel:(id)a1;
- (void)trackerMallTabFisrtScreenWithTabId:(id)a0 openTime:(long long)a1 realOpenTime:(long long)a2 firstScreenTime:(long long)a3;
- (void)trackerMallTabFisrtScreenWithTabId:(id)a0 openTime:(long long)a1 firstScreenTime:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;

@end
