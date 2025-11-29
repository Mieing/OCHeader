@class NSString;

@interface ACCAdvanceEditUtil : NSObject <ACCAdvanceEditUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getBgmTrack:(id)a0;
+ (id)getMusicIdWithSlot:(id)a0;
+ (id)allMusicIDsOfNLE:(id)a0;
+ (void)removeUserEditAudioSlotOfNLE:(id)a0 resourceID:(id)a1;
+ (void)removeAudioSlotOfNLE:(id)a0 publishModel:(id)a1 resourceID:(id)a2;
+ (void)removeAllAudioSlotOfNLE:(id)a0 publishModel:(id)a1;
+ (void)updateMusicTipInfoOfPublishModel:(id)a0 accordingToNLE:(id)a1;


@end
