@class NSString;

@interface AWEAdComponentFpsTrackService : NSObject <AWEAdComponentFpsTrackService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeAdComponentShownInfo:(id)a0;
+ (id)adComponentTypeInfo:(id)a0;
+ (id)adComponentShownInfo:(id)a0;
+ (id)extraTrackInfoEnterAd:(id)a0;
+ (id)extraTrackInfoLeaveAd:(id)a0;
+ (void)updateAdComponentShown:(id)a0 withAweme:(id)a1;


@end
