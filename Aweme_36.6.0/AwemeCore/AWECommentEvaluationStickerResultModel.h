@class UIImage, NSString, AWEIMStickerModel;

@interface AWECommentEvaluationStickerResultModel : NSObject <BDModelCustom>

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) AWEIMStickerModel *stickerModel;
@property (copy, nonatomic) NSString *imageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
