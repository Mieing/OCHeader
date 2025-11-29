@class NSString;

@interface IESLiveInteractiveFastMatchAPI : HTSLiveApi <IESLiveInteractiveFastMatchServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchMatchDataWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchFastMatchShowEntranceWithRoomId:(id)a0 completion:(id /* block */)a1;
- (void)updateAudienceSettingsWithSettingData:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;

@end
