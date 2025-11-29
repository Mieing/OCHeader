@class NSArray;

@interface AWEAdFeedVideoPlaybackTimeAddObserverModel : BDXBridgeModel

@property (copy, nonatomic) NSArray *times;
@property (nonatomic) long long count;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
