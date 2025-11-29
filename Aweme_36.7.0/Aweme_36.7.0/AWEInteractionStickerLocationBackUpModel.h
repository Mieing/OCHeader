@class NSDecimalNumber, NSString;

@interface AWEInteractionStickerLocationBackUpModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) NSDecimalNumber *xForRecover;
@property (retain, nonatomic) NSDecimalNumber *yForRecover;
@property (retain, nonatomic) NSDecimalNumber *widthForRecover;
@property (retain, nonatomic) NSDecimalNumber *heightForRecover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformerForDecimalNumber;
+ (id)xForRecoverJSONTransformer;
+ (id)yForRecoverJSONTransformer;
+ (id)widthForRecoverJSONTransformer;
+ (id)heightForRecoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)validNumber:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
