@class AWECommerceStickerDetailModel, NSString, NSArray;

@interface AWEStudioNewFaceStickerModel : AWEStickerDetailModel <ACCStudioNewFaceStickerModelProtocol>

@property (retain, nonatomic) AWECommerceStickerDetailModel *commerceStickerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *effectID;
@property (nonatomic) BOOL isFavorited;
@property (copy, nonatomic) NSArray *childrenStickersIDs;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
