@class NSNumber, NSString, NSDictionary;

@interface IESLiveStickerFontConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *fontID;
@property (copy, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *fontName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
