@class NSNumber, IESLiveCountTimer;
@protocol IESLiveGiftPanelDataSourceDelegate;

@interface IESLiveFetchIncrementalGiftListTask : NSObject

@property (retain, nonatomic) NSNumber *pageType;
@property (weak, nonatomic) id<IESLiveGiftPanelDataSourceDelegate> delegate;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) BOOL running;
@property (nonatomic) double taskInterval;

- (void)startTask;
- (void)fetchIncrementalGiftList;
- (id)initWithPageType:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopTask;

@end
