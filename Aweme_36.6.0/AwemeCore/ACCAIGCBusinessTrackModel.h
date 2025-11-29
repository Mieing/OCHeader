@class ACCAIGCBusinessEventModel, NSMutableDictionary, NSString;
@protocol ACCRepoDataContext;

@interface ACCAIGCBusinessTrackModel : NSObject <ACCAIGCBusinessTrackData>

@property (retain, nonatomic) NSMutableDictionary *subEventContainer;
@property (weak, nonatomic) id<ACCRepoDataContext> repoDataContext;
@property (retain, nonatomic) ACCAIGCBusinessEventModel *track;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)businessExtraParams;
- (void)rebuildBusinessTrackDataWith:(id)a0;
- (id)businessTrackModelWith:(id)a0;
- (id)businessExtraParamsWith:(id)a0;
- (void)rebuildBusinessTrackData;
- (id)handlerAssembleSubTrackEventClasses;
- (void)setBusinessTrackModelData:(id)a0 withObjectValue:(id)a1;
- (id)dtoTransModelToSaveDraft;
- (void)recoverFromDraft:(id)a0;
- (void).cxx_destruct;

@end
