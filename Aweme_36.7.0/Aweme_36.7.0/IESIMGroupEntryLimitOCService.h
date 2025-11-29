@class NSString;

@interface IESIMGroupEntryLimitOCService : HTSService <IESIMGroupEntryLimitOCServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)translateEntryLimitsDictToTrackerDict:(id)a0 groupEntryLimitDict:(id)a1 originSelectedFansClubType:(id)a2 entrySettings:(id)a3;
- (void)showGroupEntryLimitsViewWithEntrySettings:(id)a0 groupEntryLimitDict:(id)a1 groupManagementInfo:(id)a2 conversation:(id)a3 originSelectedFansClubType:(id)a4 ext:(id)a5 completion:(id /* block */)a6;
- (void)__trackUpdateLimitWithEntrySettings:(id)a0 trackLimitDictBeforeUpdated:(id)a1 trackLimitDict:(id)a2 conversation:(id)a3 ext:(id)a4;
- (void)fetchAndEnterToGroupEntryLimitWithConversation:(id)a0 ext:(id)a1 completion:(id /* block */)a2;
- (void)updateGroupEntryLimits:(id)a0 trackerDict:(id)a1 preEntryLimits:(id)a2 conversation:(id)a3 originSelectedFansClubType:(id)a4 entrySettings:(id)a5 ext:(id)a6;

@end
