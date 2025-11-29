@class NSString, NSMutableDictionary, NSDate;
@protocol AWEPOIPageTrackerDelegate;

@interface AWEPOIPageTracker : NSObject

@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) BOOL isFirstOpen;
@property (copy, nonatomic) NSString *lastEvent;
@property (copy, nonatomic) NSString *lastAnchorEvent;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double startTime;
@property (nonatomic) double lastTime;
@property (retain, nonatomic) NSDate *requestStartTime;
@property (nonatomic) BOOL requestSucceed;
@property (retain, nonatomic) NSMutableDictionary *cardDict;
@property (retain, nonatomic) NSMutableDictionary *cardUploadDict;
@property (retain, nonatomic) NSMutableDictionary *timeDict;
@property (retain, nonatomic) NSMutableDictionary *eventParams;
@property (weak, nonatomic) id<AWEPOIPageTrackerDelegate> delegate;

+ (id)pageOpenedStates;

- (id)initWithPageName:(id)a0 sessionID:(id)a1 startTime:(double)a2;
- (void)trackWithName:(id)a0 time:(double)a1 isAnchor:(BOOL)a2 onlyOnce:(BOOL)a3 extraParams:(id)a4;
- (id)paramsWithTime:(double)a0 lastEvent:(id)a1 extraParams:(id)a2;
- (void)trackWithName:(id)a0 time:(double)a1 lastEvent:(id)a2 isAnchor:(BOOL)a3 onlyOnce:(BOOL)a4 extraParams:(id)a5;
- (void)trackHmdWithService:(id)a0 params:(id)a1;
- (id)eventTrackerParamsExceptCardFill;
- (id)cardFillTime;
- (id)initWithPageName:(id)a0 sessionID:(id)a1;
- (void)markPageCreateOnlyOnce:(BOOL)a0 time:(double)a1 params:(id)a2;
- (void)markRequestSendOnlyOnce:(BOOL)a0 time:(double)a1 params:(id)a2;
- (void)markRequestCostOnlyOnce:(BOOL)a0 time:(double)a1 realStartTime:(id)a2 totalDuration:(id)a3 receivedBytes:(id)a4 serverDuration:(id)a5 extraParams:(id)a6;
- (void)markRequestFinishOnlyOnce:(BOOL)a0 time:(double)a1 result:(BOOL)a2 failedReason:(id)a3 extraParams:(id)a4;
- (void)markContentFillStartOnlyOnce:(BOOL)a0 time:(double)a1 params:(id)a2;
- (void)markCardFillWithCardName:(id)a0 time:(double)a1 cardType:(long long)a2 result:(BOOL)a3 duration:(double)a4 extraParams:(id)a5;
- (void)markFMPCompletedOnlyOnce:(BOOL)a0 duration:(double)a1 isRetry:(BOOL)a2 isNew:(BOOL)a3 extraParams:(id)a4;
- (void)markPageBounceOnlyOnce:(BOOL)a0 isFmpEnd:(BOOL)a1 time:(double)a2 type:(long long)a3 extraParams:(id)a4;
- (void)markEventWithName:(id)a0 onlyOnce:(BOOL)a1 time:(double)a2 lastEvent:(id)a3 extraParams:(id)a4;
- (void).cxx_destruct;

@end
