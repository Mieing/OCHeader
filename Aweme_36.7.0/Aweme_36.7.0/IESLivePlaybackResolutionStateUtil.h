@class NSString;

@interface IESLivePlaybackResolutionStateUtil : NSObject <IESLivePlaybackRoomModuleResolutionStateInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleOf:(unsigned long long)a0;
+ (id)videoResolutionStateKey;
+ (id)createAttr:(id)a0 midImageText:(id)a1 right:(id)a2;
+ (id)createAttr:(id)a0 mid:(id)a1 right:(id)a2;
+ (id)relatedCellTitleOf:(unsigned long long)a0;
+ (id)liveTitleOf:(id)a0;
+ (id)liveSDKKeyOf:(unsigned long long)a0;
+ (unsigned long long)videoResolutionTypeOf:(id)a0;
+ (id)loadingTextWithLeftText:(id)a0 midImageText:(id)a1 rightText:(id)a2;
+ (id)loadingTextOf:(id)a0;
+ (id)finishTextOf:(id)a0;
+ (id)trackName:(id)a0;
+ (id)resolutionTrackName:(unsigned long long)a0;


@end
