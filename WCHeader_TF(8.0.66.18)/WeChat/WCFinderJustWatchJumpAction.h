@class WCFinderJustWatchContoller;

@interface WCFinderJustWatchJumpAction : NSObject

@property (retain, nonatomic) WCFinderJustWatchContoller *watchCtrl;
@property (nonatomic) BOOL isIgnore;

- (void)ignore;
- (void)loading;
- (void)fail;
- (void)complete;
- (void).cxx_destruct;

@end
