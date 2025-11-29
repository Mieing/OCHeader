@class NSString;

@interface WCAudioSessionLogic : MMUserService <MMServiceProtocol, WCAudioSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (BOOL)BlockChangeCategoryToNotPlayAndRecordWithBlockType:(unsigned long long)a0;
- (BOOL)BlockChangeCategoryToAmbientWithBlockType:(unsigned long long)a0;
- (BOOL)BlockChangeCategoryToSoloAmbientWithBlockType:(unsigned long long)a0;
- (BOOL)BlockDeactivateSession;
- (BOOL)BlockDeactivateSpeaker;
- (BOOL)BlockActivateSpeaker;
- (BOOL)BlockChangeCategroyPlaybackOptionsWithBlockType:(unsigned long long)a0 options:(unsigned long long)a1 mode:(id)a2;
- (BOOL)BlockChangeCategroyPlayAndRecordOptionsWithBlockType:(unsigned long long)a0 options:(unsigned long long)a1 mode:(id)a2;

@end
