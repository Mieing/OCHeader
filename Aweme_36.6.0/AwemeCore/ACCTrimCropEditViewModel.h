@class NSArray, UIView, NSMutableArray, AWEVideoPublishViewModel;

@interface ACCTrimCropEditViewModel : ACCEditViewModel

@property (retain, nonatomic) AWEVideoPublishViewModel *backupWorkspace;
@property (retain, nonatomic) NSMutableArray *originalProjects;
@property (weak, nonatomic) UIView *sequenceMediaContainerSuperView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerOriginalFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bigMediaFrame;
@property (copy, nonatomic) NSArray *barArray;
@property (readonly, nonatomic) NSArray *barItemArray;

- (void)backupPublishViewModel;
- (BOOL)hasChangedDuration;
- (void)rollBackRepositoryModels;
- (BOOL)needRollBackWorkspace;
- (void)backupVideoDataRender;
- (id)findBarWithItem:(id)a0;
- (id)repositoryClassesNeedBackup;
- (void).cxx_destruct;
- (void)cleanData;

@end
