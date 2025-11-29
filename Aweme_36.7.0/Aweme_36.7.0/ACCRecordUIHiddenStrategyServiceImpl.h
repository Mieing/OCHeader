@class NSString, ACCGroupedPredicate;

@interface ACCRecordUIHiddenStrategyServiceImpl : NSObject <ACCRecordUIHiddenStrategyService>

@property (retain, nonatomic) ACCGroupedPredicate *globalPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *recordButtonPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *toolbarPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *stickerContainerPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *switchViewPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *momentFeedEntrancePredicate;
@property (retain, nonatomic) ACCGroupedPredicate *zoomSelectButtonPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *forbidZoomSelectButtonShowChangePredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
