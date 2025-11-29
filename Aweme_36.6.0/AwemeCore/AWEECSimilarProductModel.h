@class NSString, NSMutableDictionary;

@interface AWEECSimilarProductModel : MTLModel <AWECommentListHeaderViewExtraInfoProtocol, MTLJSONSerializing>

@property (retain, nonatomic) NSMutableDictionary *entranceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *iconDark;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) long long entranceTextType;
@property (nonatomic) long long tagLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)similarProductEntranceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
