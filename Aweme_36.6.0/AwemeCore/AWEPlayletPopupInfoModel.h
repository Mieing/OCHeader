@class NSString;

@interface AWEPlayletPopupInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *infoString;
@property (nonatomic) unsigned long long popupType;
@property (nonatomic) BOOL canPopup;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
