@class AWEShareEcomMediaDataModel;

@interface AWEShareEcomMediaResponseModel : AWEShareBeforeShareResponseModel

@property (retain, nonatomic) AWEShareEcomMediaDataModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
