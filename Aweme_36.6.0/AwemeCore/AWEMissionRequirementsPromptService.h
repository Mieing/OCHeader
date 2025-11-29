@class NSString, AWEPublishmentProcessObserver;

@interface AWEMissionRequirementsPromptService : HTSService <AWEMissionRequirementsPromptService>

@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) AWEPublishmentProcessObserver *observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endCurrentMissionPublishmentSession;
- (void)startPublishmentSessionWithRequiredStickerIDs:(id)a0 musics:(id)a1 MVIDs:(id)a2 challenges:(id)a3 usersShouldBeMentioned:(id)a4 mission:(id)a5;
- (void)checkToastValidationAtIndex:(unsigned long long)a0 text:(id)a1;
- (void)startPublishmentSessionWithChallenge:(id)a0;
- (void)startPublishmentSessionWithMission:(id)a0;
- (void).cxx_destruct;

@end
