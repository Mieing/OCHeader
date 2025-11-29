@class NSString, AWEFormatAISearchCardRawDataModel;

@interface AWEFormatAISearchCardModel : AWESearchBasicCardModel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *copedContent;
@property (retain, nonatomic) AWEFormatAISearchCardRawDataModel *rawData;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
