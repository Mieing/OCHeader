@class NSString, AWEQuickFlashStickerModel;

@interface APCDTOCameraStickerExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEQuickFlashStickerModel *flashModel;
@property (copy, nonatomic) NSString *flashID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
