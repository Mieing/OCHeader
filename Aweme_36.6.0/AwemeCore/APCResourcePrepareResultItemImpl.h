@class APCResourcePrepareResultPath, APCDTOEditorResource, NSString, PHAsset, NSError;

@interface APCResourcePrepareResultItemImpl : NSObject <APCResourcePrepareResultItem>

@property (retain, nonatomic) APCDTOEditorResource *originalResource;
@property (retain, nonatomic) PHAsset *albumPHAsset;
@property (copy, nonatomic) APCResourcePrepareResultPath *mainPathObject;
@property (copy, nonatomic) APCResourcePrepareResultPath *livePhotoVideoPathObject;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *photoPath;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMainPath:(id)a0 livePhotoVideoPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithPHAsset:(id)a0;

@end
