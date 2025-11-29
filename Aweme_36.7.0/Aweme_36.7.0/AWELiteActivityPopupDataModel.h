@class AWELiteActivityPopupTrackEvent, NSString, AWELiteActivityPopupToastModel, AWELiteActivityPopupExtraModel, AWELiteActivityPopupLimitInfoModel, AWELiteActivityPopupButtonModel, AWELiteActivityPopupBodyModel, AWELiteActivityPopupBodyExtraModel, NSDictionary, NSNumber, AWELiteInvitationPopupModel;

@interface AWELiteActivityPopupDataModel : AWELiteBaseApiModel

@property (retain, nonatomic) NSNumber *style;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *popupKey;
@property (copy, nonatomic) NSString *headText;
@property (copy, nonatomic) NSString *footText;
@property (retain, nonatomic) AWELiteActivityPopupButtonModel *buttonModel;
@property (retain, nonatomic) AWELiteActivityPopupToastModel *toastModel;
@property (retain, nonatomic) AWELiteActivityPopupBodyModel *body;
@property (retain, nonatomic) AWELiteActivityPopupLimitInfoModel *limitInfo;
@property (retain, nonatomic) AWELiteActivityPopupExtraModel *extra;
@property (retain, nonatomic) AWELiteActivityPopupBodyExtraModel *bodyExtra;
@property (retain, nonatomic) AWELiteInvitationPopupModel *popupData;
@property (retain, nonatomic) AWELiteActivityPopupTrackEvent *trackEvents;
@property (copy, nonatomic) NSDictionary *trackPararms;
@property (nonatomic) BOOL useLynx;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) double currentTime;
@property (nonatomic) double countdownEndTime;
@property (nonatomic) BOOL usePolaris;
@property (copy, nonatomic) NSDictionary *popupV2;

+ (id)buttonModelJSONTransformer;
+ (id)toastModelJSONTransformer;
+ (id)bodyJSONTransformer;
+ (id)limitInfoJSONTransformer;
+ (id)popupDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
