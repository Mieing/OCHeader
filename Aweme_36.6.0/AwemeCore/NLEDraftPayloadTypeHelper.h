@interface NLEDraftPayloadTypeHelper : NSObject

+ (id)pathOfType:(unsigned long long)a0 resourceID:(id)a1 isRevered:(BOOL)a2 isAudioStrong:(BOOL)a3 pathExtension:(id)a4;
+ (id)fileSuffixOfType:(unsigned long long)a0;
+ (id)folderNameOfType:(unsigned long long)a0;
+ (id)specificPathWithIsRevered:(BOOL)a0 isAudioStrong:(BOOL)a1;
+ (id)pathForAudioStrongOfType:(unsigned long long)a0 resourceID:(id)a1;
+ (id)pathOfType:(unsigned long long)a0 resourceID:(id)a1;
+ (id)pathForGameplayOfType:(unsigned long long)a0 specificTag:(id)a1 resourceID:(id)a2;

@end
