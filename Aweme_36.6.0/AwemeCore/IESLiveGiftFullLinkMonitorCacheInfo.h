@interface IESLiveGiftFullLinkMonitorCacheInfo : NSObject <NSDiscardableContent>

@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long linkType;

- (void)discardContentIfPossible;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (BOOL)beginContentAccess;

@end
