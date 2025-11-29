@class NSString;

@interface IESLocalLifeFeedBizService : HTSService <IESLocalLifeFeedBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getProductGenreInfoParamsWithAweme:(id)a0;
+ (id)getCookieInfoForUrls:(id)a0;
+ (id)getTokenInfo;
+ (void)interactAwemeItemWithConfig:(id)a0;
+ (void)registerVideoFeedMessage:(id)a0;
+ (void)unregisterVideoFeedMessage:(id)a0;


@end
