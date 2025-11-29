@class NSArray, NSString;

@interface IESLLGDCommonContentVOModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *fullScreenTextVOList;
@property (retain, nonatomic) NSArray *popupTextVOList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fullScreenTextVOListJSONTransformer;
+ (id)popupTextVOListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEqualWithTextList1:(id)a0 textList2:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
