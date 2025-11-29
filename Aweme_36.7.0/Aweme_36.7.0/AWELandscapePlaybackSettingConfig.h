@class NSString;

@interface AWELandscapePlaybackSettingConfig : NSObject <AWELandscapePlaybackSettingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getPlaybackSettingInfo;
+ (BOOL)canBlockReminderTipsWithModel:(id)a0;
+ (BOOL)playbackSettingEnabledWithModel:(id)a0;
+ (BOOL)landscapeFeedCanScrollWhenFromHomePage;


@end
