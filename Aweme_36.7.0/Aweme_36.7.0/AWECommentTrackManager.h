@class NSDictionary, NSString;

@interface AWECommentTrackManager : NSObject <AWECommentTrackManagerProtocol>

@property (retain, nonatomic) NSDictionary *videoPlayParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)zeroCommentPostTrackParams;
+ (void)setZeroCommentPostTrackParams:(id)a0;
+ (id)obtainCommentPostCommonParams;
+ (id)obtainCommentMediaFeedTrackParams;
+ (void)clearCommentPostCommonParams;
+ (void)addVideoPlayTrackParamsTo:(id)a0 forAweme:(id)a1;
+ (id)commentTrackingModel;
+ (id)addCommentParams:(long long)a0 generalModel:(id)a1 commentModel:(id)a2 textExtras:(id)a3 params:(id)a4;
+ (void)reportCommentSendSliWithAwemeID:(id)a0 extra:(id)a1;
+ (void)showDebugInfo;
+ (void)resetVideoPlayCommentTrackParams;
+ (id)videoPlayCommentTrackParams;
+ (void)commentSendBeginWithAwemeID:(id)a0;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
