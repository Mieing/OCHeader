@class NSString;

@interface ACCTextStickerClipDiffModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *fontEffectId;
@property (copy, nonatomic) NSString *textColorString;
@property (copy, nonatomic) NSString *borderColorString;
@property (nonatomic) long long style;
@property (nonatomic) long long alignment;

+ (id)modelCustomPropertyMapper;
+ (BOOL)isStringEqual:(id)a0 toString:(id)a1;

- (void).cxx_destruct;
- (BOOL)diff:(id)a0;

@end
