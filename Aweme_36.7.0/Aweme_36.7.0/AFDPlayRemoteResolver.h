@class NSString;

@interface AFDPlayRemoteResolver : NSObject <AFDPlayRemoteResolverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidAwemeModelForPlay:(id)a0 supportRichAweme:(BOOL)a1;
+ (BOOL)isValidPreloadAwemeModel:(id)a0 supportRichAweme:(BOOL)a1;
+ (BOOL)canShowLongVideoFeedShareEntrance:(id)a0;
+ (BOOL)isValidAwemeModelForPlay:(id)a0;
+ (BOOL)isValidPreloadAwemeModel:(id)a0;
+ (BOOL)enableCreatePlayRemoteWithLiveRoom:(id)a0;
+ (BOOL)canShowFeedShareEntranceForAwemeModel:(id)a0;
+ (BOOL)canShowFeedShareFloatEntranceForPadTheater;


@end
