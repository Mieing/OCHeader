@class NSDictionary, AWESearchHomeNewStyleSearchBarController;

@interface AWESearchBarLandingParamsManager : NSObject

@property (copy, nonatomic) NSDictionary *landingParams;
@property (weak, nonatomic) AWESearchHomeNewStyleSearchBarController *searchBarController;

- (void)handleHybridInfo:(id)a0;
- (void)expandSearchBarIfNeededWithLandingParams:(id)a0;
- (void)updateLandingParams:(id)a0;
- (void)handleLandingParams;
- (void).cxx_destruct;

@end
