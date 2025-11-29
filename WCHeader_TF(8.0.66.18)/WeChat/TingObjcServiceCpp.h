@class NSString;

@interface TingObjcServiceCpp : UnitRCObjcBaseProxyClass <TingObjcService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getExptConfig;
- (id)getPlayTaskIndicatorService;
- (id)getRedDotService;
- (id)audioChatService;
- (id)getPlayService;
- (id)getSessionReportService;
- (id)getMusicChatService;
- (id)getDailyPlaylistService;

@end
