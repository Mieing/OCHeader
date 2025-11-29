@class AWECommentEvaluationStickerResultModel, NSString, NSArray, NSNumber;

@interface AWECommentEvaluationResultModel : NSObject <BDModelCustom>

@property (retain, nonatomic) NSNumber *score;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *customExpansionSelect;
@property (retain, nonatomic) NSArray *imagesList;
@property (retain, nonatomic) AWECommentEvaluationStickerResultModel *stickerModel;
@property (copy, nonatomic) NSArray *textExtras;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
