@class HDImageExpireReporter, CMessageWrap;

@interface MMMediaBrowserReporter : NSObject

@property (retain, nonatomic) HDImageExpireReporter *imageExpireReporter;
@property (retain, nonatomic) CMessageWrap *msgWrap;

- (void)onPlayButtonClicked:(BOOL)a0;
- (void)onPlayRateChangeFrom:(float)a0 toRate:(float)a1;
- (void).cxx_destruct;

@end
