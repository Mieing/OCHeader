@class IESLiveGuideModel, IESLiveOptCategoryAPI;

@interface IESLiveUploadGameNameStore : NSObject

@property (retain, nonatomic) IESLiveOptCategoryAPI *api;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;

- (void)reviewCategoryName:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
