@class NSString, AEKExtraAutoCaptionTrackModel, AEKElementDiffableNode, AEKExtraAETrackModel;

@interface AEKExtraDataRepositoryImpl : AEKBaseRenderEditor <AEKExtraDataRepository, AEKElementDiffableNode>

@property (retain, nonatomic) AEKExtraAETrackModel *aeStickerTracks;
@property (retain, nonatomic) AEKExtraAETrackModel *aeEffectTracks;
@property (retain, nonatomic) AEKExtraAETrackModel *aeAudioTracks;
@property (retain, nonatomic) AEKExtraAutoCaptionTrackModel *captionTracks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AEKElementDiffableNode *diffableNode;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) id data;
@property (readonly, nonatomic) BOOL isEnable;

- (id)nleModel;
- (id)diffChangesWithOrigin:(id)a0;
- (void)removeAll;

@end
