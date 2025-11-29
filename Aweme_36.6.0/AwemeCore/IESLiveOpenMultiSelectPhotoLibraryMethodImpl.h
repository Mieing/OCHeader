@protocol IESLivePhotoLibraryService;

@interface IESLiveOpenMultiSelectPhotoLibraryMethodImpl : IESLiveOpenMultiSelectPhotoLibraryMethod

@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
