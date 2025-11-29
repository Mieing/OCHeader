@class FinderDislikeFlutterAPI, WCFinderFeedContentVM, NSString;

@interface WCFinderFlutterDislikePlugin : NSObject <MMFlutterPlugin, FinderDislikeNativeAPI, WCFinderFeedContentVMExt>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) FinderDislikeFlutterAPI *flutterAPI;
@property (nonatomic) BOOL dislikeV2Enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentVM:(id)a0;
- (id)flutterHalfVC;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)submitFeedDislikeReasonsSelectedReasons:(id)a0 error:(id *)a1;
- (void)retryFetchDislikeReasonsWithError:(id *)a0;
- (void)submitDislikeWithSelectedReasons:(id)a0;
- (void)onFeedContentFeedbackReasonChanged:(id)a0;
- (void)onFeedContentFeedbackReasonFetchFail:(id)a0;
- (void)_updateDislikeReasonFetchResultWithContentVM:(id)a0;
- (void).cxx_destruct;

@end
