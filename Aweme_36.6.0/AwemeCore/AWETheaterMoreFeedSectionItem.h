@class NSString, NSDictionary, AWEAwemeModel, AWETheaterMoreFeedSmallCardCellViewModel, AWETheaterMoreFeedSectionItemLynxInfo, AWETheaterMoreFeedSectionItemAppointmentInfo;

@interface AWETheaterMoreFeedSectionItem : MTLModel <AWEListDiffable, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWETheaterMoreFeedSmallCardCellViewModel *smallCardCellViewModel;
@property (nonatomic) long long itemType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWETheaterMoreFeedSectionItemLynxInfo *lynxInfo;
@property (retain, nonatomic) AWETheaterMoreFeedSectionItemAppointmentInfo *appointmentInfo;
@property (copy, nonatomic) NSDictionary *logPassBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appointmentInfoJSONTransformer;
+ (id)awemeModelConfigJSONTransformer;
+ (id)lynxInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifierKey;
- (void).cxx_destruct;

@end
