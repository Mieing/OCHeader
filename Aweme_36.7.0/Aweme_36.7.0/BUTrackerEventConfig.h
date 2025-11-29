@interface BUTrackerEventConfig : NSObject

@property (nonatomic) BOOL isFromFE;
@property (nonatomic) BOOL needIgnoreTrack;

- (id)init;

@end
