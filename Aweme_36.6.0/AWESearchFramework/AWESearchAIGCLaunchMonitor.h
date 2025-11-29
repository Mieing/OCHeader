@interface AWESearchAIGCLaunchMonitor : NSObject

@property (nonatomic) double startTS;
@property (nonatomic) double initPageTS;
@property (nonatomic) double insertDefaultCardTS;
@property (nonatomic) double endTS;
@property (nonatomic) double allCardsAttachScreenTS;
@property (nonatomic) BOOL useLocalHistory;
@property (nonatomic) BOOL hasSearchKeyword;

- (void)sendTrackWithParams:(id)a0;

@end
