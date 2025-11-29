@class NSString;

@interface AWECommerceStickerUnlockInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *openUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
