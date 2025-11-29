@class NSDate;

@interface WCFinderLiveShareCardExposeReportAdapter : NSObject

@property (retain, nonatomic) NSDate *lastAppearDate;
@property (nonatomic) BOOL isLastEventAppear;
@property (copy, nonatomic) id /* block */ reportAction;

- (void)onAppear;
- (void)onDisappear;
- (void).cxx_destruct;

@end
