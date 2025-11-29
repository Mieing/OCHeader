@class NSString, AWEAwemeModel;

@interface AWELongPressAdAttitudeV3FeedbackSubmitHelper : NSObject <AWEGokuPluginTargetProtocol>

@property (copy) AWEAwemeModel *aweme;
@property BOOL dislike;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didEndDisplayingCellWithContext:(id)a0;
- (void)refreshTableViewController:(id)a0;
- (void)likeAweme:(id)a0;
- (void)dislikeAweme:(id)a0;
- (void)UIApplicationWillTerminate:(id)a0;
- (void)feedbackSubmit;
- (void).cxx_destruct;
- (unsigned long long)moduleNames;
- (void)reset;

@end
