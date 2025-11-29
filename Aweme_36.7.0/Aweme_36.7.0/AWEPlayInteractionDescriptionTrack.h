@class NSString;

@interface AWEPlayInteractionDescriptionTrack : NSObject

@property (copy, nonatomic) NSString *currentClickType;
@property (nonatomic) double clickStartTime;

+ (void)trackVideoFunctionDurationIfNeeded;
+ (void)trackVideoFunctionClickWithParserContext:(id)a0 extraModel:(id)a1 clickMethod:(id)a2;
+ (void)trackFeedVideoTitleClickWithParserContext:(id)a0 extraModel:(id)a1;
+ (void)trackTitleExpandWithActionType:(id)a0 parserContext:(id)a1;
+ (void)trackFeedVideoTitleDurationWithParserContext:(id)a0;
+ (BOOL)canTrackFeedVideoTitleDuration:(id)a0;
+ (void)trackFeedVideoTitleShowWithParserContext:(id)a0;
+ (void)trackVideoFunctionShowWithParserContext:(id)a0 extraModel:(id)a1 showMethod:(id)a2;
+ (void)trackTitleExpandWithActionType:(id)a0 spreadMethod:(id)a1 parserContext:(id)a2;
+ (BOOL)feedInteractionFunctionTrackEnable;
+ (id)functionNameWithParserContext:(id)a0 extraModel:(id)a1;
+ (void)trackVideoFunctionDurationWithParserContext:(id)a0 extraModel:(id)a1 clickMethod:(id)a2;
+ (BOOL)feedVideoTitleEventEnable:(id)a0;
+ (id)commonParamsWithParserContext:(id)a0;
+ (id)functionArrayStringWithParserContext:(id)a0;
+ (id)functionTypeWithParserContext:(id)a0 extraModel:(id)a1;

- (void).cxx_destruct;
- (void)resetTracker;
- (id)init;

@end
