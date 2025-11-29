@class NSString;

@interface IESECLiveReplayModule : NSObject <IESECLiveReplayModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDataStoreIfNeeded:(id)a0 replayData:(id)a1 extraParams:(id)a2 trackParams:(id)a3;
+ (id)interactionViewWithDataStore:(id)a0;


@end
