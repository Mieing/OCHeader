@class AWEVideoCoverImageUploadAdaptor, NSString, AWEVideoCoverEvaluateModel, DUXContentSheet, AWEAwemeModel, AWEVideoPublishViewModel, AWEVideoCoverEvaluateViewController;

@interface AWEVideoCoverEvaluateHandler : NSObject

@property (retain, nonatomic) AWEVideoCoverImageUploadAdaptor *originImageUpload;
@property (retain, nonatomic) AWEVideoCoverImageUploadAdaptor *evaluateImageUpload;
@property (retain, nonatomic) AWEVideoCoverEvaluateViewController *evaluateVC;
@property (retain, nonatomic) DUXContentSheet *remindSheet;
@property (retain, nonatomic) NSString *detectFrom;
@property (retain, nonatomic) NSString *coverEvaluateImageUri;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEVideoCoverEvaluateModel *evaluateModel;
@property (copy, nonatomic) id /* block */ selectAiCoverBlock;

+ (void)requestEvaluateCover:(id)a0 completion:(id /* block */)a1;

- (void)requestUpdateCover:(id)a0 image:(id)a1 completion:(id /* block */)a2;
- (void)showCoverReevaluatePanel:(id)a0 videoPublishViewModel:(id)a1 detectFrom:(id)a2 evaluateImage:(id)a3 saveCoverAction:(id /* block */)a4;
- (void)showCoverReevaluatePanel:(id)a0 videoPublishViewModel:(id)a1 evaluateImage:(id)a2 saveCoverAction:(id /* block */)a3;
- (BOOL)couldShowLastCoverEvaluateViewController;
- (void)showLastCoverEvaluateViewController;
- (void)showCoverWithEvaluateModel:(id)a0 videoPublishViewModel:(id)a1 evaluateImage:(id)a2 saveCoverAction:(id /* block */)a3;
- (void)requestPanelAppeared:(id)a0;
- (id)getReEvaluateModel:(id)a0 publishModel:(id)a1 image:(id)a2 fromEditPage:(BOOL)a3;
- (void)toEvaluate:(id)a0 originImage:(id)a1 evaluateImage:(id)a2;
- (void)toUpdateCover:(id /* block */)a0 image:(id)a1;
- (void)requestQualityCover:(id)a0;
- (void)uploadUserOriginCoverImageToQualify:(id)a0 originImage:(id)a1;
- (void)uploadUserEvaluateCoverImageToQualify:(id)a0 evaluateImage:(id)a1;
- (void)handleCoverQualityFail:(id)a0;
- (void)requestQualityCover:(id)a0 completion:(id /* block */)a1;
- (void)uploadUserEvaluateCoverImageToApply:(id)a0 image:(id)a1 completion:(id /* block */)a2;
- (void)afterPanelShow:(id)a0;
- (id)startEditCoverWithConfig:(id)a0 isRecommend:(BOOL)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
