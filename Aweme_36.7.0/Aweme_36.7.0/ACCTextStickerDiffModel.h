@class NSString, NSArray;

@interface ACCTextStickerDiffModel : NSObject

@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSArray *clips;

+ (id)modelFromStickerData:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (BOOL)isStringEqual:(id)a0 toString:(id)a1;
+ (id)fromJsonString:(id)a0;
+ (id)modelFromNewStickerData:(id)a0;

- (void).cxx_destruct;
- (BOOL)diff:(id)a0;
- (id)toJsonString;

@end
