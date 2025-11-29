@class NSString;

@interface UDRSecondCutPromotionItem : NSObject

@property (retain, nonatomic) NSString *text_zh_Hans;
@property (retain, nonatomic) NSString *text_zh_Hant;
@property (retain, nonatomic) NSString *text_en;
@property (retain, nonatomic) NSString *iconPath;
@property (readonly, nonatomic) NSString *text;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)initWithJSONString:(id)a0;
- (void).cxx_destruct;

@end
