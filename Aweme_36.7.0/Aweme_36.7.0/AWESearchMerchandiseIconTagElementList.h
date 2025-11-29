@class AWESearchTagIcon, NSString, AWESearchMerchandiseIconPosition, AWESearchTagText, NSNumber, AWESearchMerchandiseBussinessInfo;

@interface AWESearchMerchandiseIconTagElementList : AWEBaseApiModel

@property (copy, nonatomic) NSString *lightIconUrl;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) AWESearchMerchandiseIconPosition *iconPosition;
@property (retain, nonatomic) AWESearchMerchandiseBussinessInfo *bussinessInfo;
@property (copy, nonatomic) NSString *iconText;
@property (copy, nonatomic) NSString *mainPictureLabel;
@property (copy, nonatomic) NSString *tagType;
@property (retain, nonatomic) AWESearchTagText *tagText;
@property (retain, nonatomic) AWESearchTagIcon *tagIcon;
@property (copy, nonatomic) NSString *schema;

+ (id)tagTextJSONTransformer;
+ (id)tagIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
