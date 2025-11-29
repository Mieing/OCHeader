@class NSString, TTVideoEngine, NSArray, NSSet;

@interface ALMOwnPlayerTTSInfoController : NSObject <ALMOwnPlayerTTSInfoControllerProtocol> {
    TTVideoEngine *_videoEngine;
    NSArray *_infos;
    NSSet *_infoIDSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupMediaInfoWithConfig:(id)a0;
- (void)updateBackupURLWithInfo:(id)a0 config:(id)a1;
- (id)initWithVideoEngine:(id)a0 config:(id)a1;
- (void)switchToInfoID:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)prepareAudio;

@end
