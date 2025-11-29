@class CAKAlbumViewController, ACCAlbumInputData;

@interface AWEAlbumSuggestionSearchExtension : ACCAlbumExtension

@property (weak, nonatomic) CAKAlbumViewController *albumViewController;
@property (weak, nonatomic) ACCAlbumInputData *inputData;

- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void)albumDidSelectAssetes:(id)a0 targetAsset:(id)a1;
- (void).cxx_destruct;

@end
