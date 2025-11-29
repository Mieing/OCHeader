@class NSArray, ACCFavoriteMVTemplatesDataController, AWEVideoPublishViewModel;

@interface AWEAlbumSelectTemplateViewModel : NSObject

@property (retain, nonatomic) ACCFavoriteMVTemplatesDataController *favoriteDataController;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSArray *dataProviderArray;
@property (copy, nonatomic) NSArray *tabTitleArray;
@property (copy, nonatomic) NSArray *viewControllers;

- (id)initWithPublishModel:(id)a0;
- (void)createDataProvider;
- (void).cxx_destruct;

@end
