@class ACCVideoDataClipRangeStorageModel, NSString, ACCCommonStickerConfigStorageModel, AWEStoryTextImageModel;

@interface ACCTextStickerViewStorageModel : MTLModel <ACCSerializationProtocol>

@property (retain, nonatomic) ACCCommonStickerConfigStorageModel *config;
@property (retain, nonatomic) AWEStoryTextImageModel *textModel;
@property (retain, nonatomic) NSString *textStickerId;
@property (nonatomic) long long stickerID;
@property (retain, nonatomic) ACCVideoDataClipRangeStorageModel *timeEditingRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accs_covertRelations:(Class)a0;
+ (id)accs_includeKeys:(BOOL)a0;

@end
