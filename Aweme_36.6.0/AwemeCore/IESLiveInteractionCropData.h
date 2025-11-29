@class NSNumber, NSDictionary, NSString;

@interface IESLiveInteractionCropData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *cropH;
@property (retain, nonatomic) NSNumber *cropW;
@property (retain, nonatomic) NSNumber *cropX;
@property (retain, nonatomic) NSNumber *cropY;
@property (retain, nonatomic) NSNumber *strideH;
@property (retain, nonatomic) NSNumber *strideW;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
