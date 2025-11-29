@class NSString;

@interface IESLiveShareResponseServiceImp : NSObject <IESLiveShareResponseService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportShareInfoWithRoomModel:(id)a0 shareType:(long long)a1 targetType:(long long)a2 platform:(id)a3 currentUser:(id)a4 eventContext:(id)a5 extraTrackParams:(id)a6 diContext:(id)a7;

@end
