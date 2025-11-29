@class AWECodeGenIMStickerModel, NSArray, AWECodeGenCommentAudioModel;

@interface AWECodeGenContentResourceModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenIMStickerModel *stickerModel;
@property (copy, nonatomic) NSArray *imageListModelArray;
@property (retain, nonatomic) AWECodeGenCommentAudioModel *commentAudioModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
