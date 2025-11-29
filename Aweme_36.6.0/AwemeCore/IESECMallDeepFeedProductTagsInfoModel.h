@class NSString, IESECURLModel;

@interface IESECMallDeepFeedProductTagsInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *header;
@property (nonatomic) long long uiType;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *uiRawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
