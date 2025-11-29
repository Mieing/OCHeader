@class NSString, AWEURLModel;

@interface AWEXiguaCommentRelatedBarModel : MTLModel <AWECommentListHeaderViewExtraInfoProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openUrl;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *openAppSchema;
@property (copy, nonatomic) NSString *rightDesc;
@property (copy, nonatomic) NSString *jumpConfirmTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
