@class NSNumber, NSString, AWERelationDynamicLable, AWEAwemeModel, AWEIMStickerModel, AWEUserModel, AWEURLModel;

@interface AWEForwardNotificationModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEUserModel *fromUser;
@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (copy, nonatomic) NSString *forwardID;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (copy, nonatomic) NSNumber *status;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (retain, nonatomic) AWEIMStickerModel *sticker;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *labelTrack;
@property (retain, nonatomic) NSString *descAndTime;

+ (id)imageUrlJSONTransformer;
+ (id)awemeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)stickerJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)hasContent;

@end
