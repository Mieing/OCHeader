@class NSString;
@protocol MiniComposerFinishEditStatusDataSource;

@interface MiniComposerFinishEditStatusImpl : NSObject <MiniComposerFinishEditStatus>

@property (weak, nonatomic) id<MiniComposerFinishEditStatusDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAIErased;
- (BOOL)isBrushed;
- (id)p_workspace;
- (void).cxx_destruct;
- (BOOL)isCropped;

@end
