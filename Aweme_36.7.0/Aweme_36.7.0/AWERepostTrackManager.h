@class NSString;

@interface AWERepostTrackManager : NSObject <AWERepostTrackManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateParamsWithAweme:(id)a0 fromAweme:(id)a1 pageType:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4;
+ (void)trackReportCommentWithReportCommentConfig:(id)a0;
+ (void)trackRepostClickWithClickConfig:(id)a0;
+ (void)trackNewForwardWithAweme:(id)a0 params:(id)a1;
+ (void)trackRepostRequestWithRequestConfig:(id)a0;
+ (void)trackPostCommentWithPostCommentConfig:(id)a0;
+ (void)trackInputWithAweme:(id)a0 fromAweme:(id)a1 pageType:(id)a2 enterFrom:(id)a3 stayTime:(long long)a4 isEnter:(BOOL)a5;
+ (id)generateAttributesWithAweme:(id)a0 fromAweme:(id)a1 pageType:(id)a2;


@end
