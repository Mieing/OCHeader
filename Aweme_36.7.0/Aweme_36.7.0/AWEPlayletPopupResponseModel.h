@class AWEPlayletPopupInfoModel;

@interface AWEPlayletPopupResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPlayletPopupInfoModel *popupInfo;

+ (id)popupInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
