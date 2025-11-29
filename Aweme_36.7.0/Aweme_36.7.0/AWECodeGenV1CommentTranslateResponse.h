@class NSString, NSArray;

@interface AWECodeGenV1CommentTranslateResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSString *originalComment;
@property (copy, nonatomic) NSString *traslateComment;
@property (copy, nonatomic) NSArray *textExtraModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
