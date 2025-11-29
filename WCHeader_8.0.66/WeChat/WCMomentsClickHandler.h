@class MMUIViewController, MMURLHandler;
@protocol WCMomentsClickHandlerDelegate;

@interface WCMomentsClickHandler : NSObject

@property (weak, nonatomic) id<WCMomentsClickHandlerDelegate> delegate;
@property (weak, nonatomic) MMUIViewController *fromViewController;
@property (retain, nonatomic) MMURLHandler *urlHandler;

- (BOOL)handleClickUserProfileWithOptions:(id)a0;
- (BOOL)handleClickBrandProfileWithOptions:(id)a0;
- (BOOL)handleClickFinderProfileWithOptions:(id)a0;
- (BOOL)handleClickTigerSourceWithOptions:(id)a0;
- (BOOL)handleClickHotwordWithOptions:(id)a0;
- (BOOL)handleClickURLWithOptions:(id)a0;
- (BOOL)handleClickTingUrlWithOptions:(id)a0;
- (id)getProfileContactWithUsername:(id)a0;
- (void).cxx_destruct;

@end
