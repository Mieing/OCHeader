@class HTSEventContext, RACSignal, RACSubject, HTSLiveMidiSkinDressInfo, NSNumber, NSString;
@protocol IESLiveRoomService;

@interface IESLiveKTVDecorateMidiViewModel : NSObject {
    struct IESLiveKTVDecorateMidiInfo { HTSLiveMidiSkinDressInfo *midiInfo; NSNumber *musicId; NSString *userId; } remoteMidiInfo;
    struct IESLiveKTVDecorateMidiInfo { HTSLiveMidiSkinDressInfo *midiInfo; NSNumber *musicId; NSString *userId; } localMidiInfo;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) RACSubject *updateSubject;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL isOptimize;
@property (nonatomic) BOOL decorateEnable;
@property (readonly, nonatomic) RACSignal *updateSignal;
@property (retain, nonatomic) HTSLiveMidiSkinDressInfo *staticDecorate;

- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)onMessageReceivedFromPrestream:(id)a0 withDict:(id)a1;
- (void)audienceHandleInfoFromWrds:(struct IESLiveKTVDecorateMidiInfo { id x0; id x1; id x2; })a0;
- (void)p_updateLocalMidiInfo:(struct IESLiveKTVDecorateMidiInfo { id x0; id x1; id x2; })a0;
- (BOOL)p_isSelfSinging;
- (void)p_updateLocal:(id)a0 info:(id)a1;
- (BOOL)p_isSyncRemoteWithSei:(id)a0;
- (void)p_updateRemoteMidiInfoFromWrds:(id /* block */)a0;
- (BOOL)p_isSyncLocalWithSei:(id)a0;
- (void)tr_showMidi:(id)a0;
- (id)getUrlArrayFromName:(id)a0;
- (id)createImageFromName:(id)a0;
- (id)createImageFromURL:(id)a0;
- (id)partyKTVDecoration;
- (id)getRemoteDressId;
- (id)getLocalDressId;
- (void)singerHandleInfo:(struct IESLiveKTVDecorateMidiInfo { id x0; id x1; id x2; })a0;
- (void)handleWithSeiModel:(id)a0;
- (id)videoChorusDecorationWithPartyKTVDecoration:(id)a0;
- (id)midiDecorationFromChorusStage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
