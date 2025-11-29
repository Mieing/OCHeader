@class NSString;

@interface AWEPOIAlbumHeadRightItem : AWEBaseApiModel

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
