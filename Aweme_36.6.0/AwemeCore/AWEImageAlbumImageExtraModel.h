@class UIColor, NSString, NSArray, AWEImageAlbumImageNavigatorInfo;

@interface AWEImageAlbumImageExtraModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *cardScheme;
@property (copy, nonatomic) NSString *cardDataString;
@property (copy, nonatomic) NSArray *cardBackupImageURLList;
@property (retain, nonatomic) AWEImageAlbumImageNavigatorInfo *navigatorInfo;
@property (retain, nonatomic) UIColor *fontColor;

+ (id)navigatorInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
