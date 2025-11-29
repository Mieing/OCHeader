@class AWESearchMerchandiseCommonTextStruct;

@interface AWESearchMerchandiseUserInfo : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseCommonTextStruct *text;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (void).cxx_destruct;

@end
