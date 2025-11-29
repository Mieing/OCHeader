@class NSArray, NSString;

@interface AWESearchPhotoTemplatesModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *photoTemplatesArray;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasMoreCards;
@property (readonly, copy, nonatomic) NSString *aladdinID;

+ (id)aladdinIDJSONTransformer;
+ (id)photoTemplatesArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
