@class NSString;
@protocol AWEFeedPauseModalContextProtocol;

@interface AWEFeedPauseModalStrategyManager : NSObject <AWEFeedPauseModalStrategyManagerProtocol>

@property (retain, nonatomic) id<AWEFeedPauseModalContextProtocol> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
