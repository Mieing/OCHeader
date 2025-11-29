@class NSString;

@interface AWEAdOpenUniversalLinkAndLandingPageTask : AWEAdBasicTask <AWEAdOpenUniversalLinkAndLandingPageTaskProtocol>

@property (copy, nonatomic) id /* block */ openOtherAppResult;
@property (nonatomic) BOOL disableTrackOpenUniversalLinkFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isToAppStoreRequestURLStr:(id)a0;

- (BOOL)shouldBeExcuted;
- (void)taskWillExcute;
- (void)taskDidExcutedWithResult:(BOOL)a0;
- (void)asyncTaskExcute;
- (BOOL)isAsyncTask;
- (id)replaceBackURLWithCreativeID:(id)a0 groupID:(id)a1 logExtra:(id)a2 eventName:(id)a3 label:(id)a4 extra:(id)a5 disableTrack:(BOOL)a6 extraRefer:(id)a7 openURL:(id)a8;
- (void)monitorWebUrl:(BOOL)a0 isSuccess:(BOOL)a1 disableTrack:(BOOL)a2 useAsUniversalLink:(BOOL)a3;
- (void).cxx_destruct;

@end
