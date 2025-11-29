@class NSArray;

@interface AWEGeneralPopupListResponseModel : AWEBaseApiModel

@property (readonly, copy, nonatomic) NSArray *popups;

+ (id)popupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
