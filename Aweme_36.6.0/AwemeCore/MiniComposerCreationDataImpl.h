@class MiniComposerFinishEditStatusImpl, NSArray, NSString;
@protocol MiniComposerCreationDataDelegate;

@interface MiniComposerCreationDataImpl : NSObject <MiniComposerFinishEditStatusDataSource, MiniComposerCreationData>

@property (retain, nonatomic) MiniComposerFinishEditStatusImpl *editStatus;
@property (weak, nonatomic) id<MiniComposerCreationDataDelegate> delegate;
@property (retain, nonatomic) NSArray *assetModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
