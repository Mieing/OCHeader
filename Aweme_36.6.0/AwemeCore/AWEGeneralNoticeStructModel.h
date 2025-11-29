@class IESIMURLModel, NSString, NSArray, AWEGeneralActionStructModel, AWEIMOfficialNoticeDisableStructModel, AWENoticeContentStructModel, AWENoticeGroupDisturbStruct, AWEIMOfficialNoticeMenuStructModel;

@interface AWEGeneralNoticeStructModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *hint;
@property (retain, nonatomic) IESIMURLModel *senderImageUrl;
@property (copy, nonatomic) NSString *senderImageUrlString;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSString *highlight;
@property (nonatomic) long long taskId;
@property (retain, nonatomic) IESIMURLModel *imageUrl;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) NSString *message_extra;
@property (retain, nonatomic) AWEGeneralActionStructModel *actionStruct;
@property (retain, nonatomic) AWENoticeContentStructModel *contentStruct;
@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *schemaText;
@property (copy, nonatomic) NSArray *otherSchemaStructs;
@property (copy, nonatomic) NSArray *richSchemaStructs;
@property (nonatomic) BOOL isUnfolded;
@property (nonatomic) BOOL unsubscribe;
@property (retain, nonatomic) AWEIMOfficialNoticeDisableStructModel *officialDisableModel;
@property (retain, nonatomic) AWEIMOfficialNoticeMenuStructModel *menu;
@property (retain, nonatomic) AWENoticeGroupDisturbStruct *groupDisturb;

+ (id)imageUrlJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)showStyleJSONTransformer;
+ (id)noticeArrayJSONTransformer;
+ (id)contentStructJSONTransformer;
+ (id)otherSchemaStructsJSONTransformer;
+ (id)richSchemaStructsJSONTransformer;
+ (id)actionStructJSONTransformer;
+ (id)senderImageUrlJSONTransformer;
+ (id)groupDisturbJSONTransformer;
+ (id)officialDisableModelJSONTransformer;
+ (id)menuJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)contentHasBigImage;
- (BOOL)contentHasNoImage;
- (void).cxx_destruct;

@end
