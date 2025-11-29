@class NSString, AWETwoTuple, AEKElementDiffResult;

@interface AEKMegaEditorDiffResultImpl : NSObject <AEKMegaEditorDiffResult>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWETwoTuple *canvasSize;
@property (retain, nonatomic) AEKElementDiffResult *video;
@property (retain, nonatomic) AEKElementDiffResult *audio;
@property (retain, nonatomic) AEKElementDiffResult *filter;
@property (retain, nonatomic) AEKElementDiffResult *adjust;
@property (retain, nonatomic) AEKElementDiffResult *beauty;
@property (retain, nonatomic) AEKElementDiffResult *infoSticker;
@property (retain, nonatomic) AEKElementDiffResult *textSticker;
@property (retain, nonatomic) AEKElementDiffResult *textNewSticker;
@property (retain, nonatomic) AEKElementDiffResult *effect;
@property (retain, nonatomic) AEKElementDiffResult *templateRegion;
@property (retain, nonatomic) AEKElementDiffResult *extraDataRepository;
@property (retain, nonatomic) AEKElementDiffResult *repoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffResult;
- (void).cxx_destruct;

@end
