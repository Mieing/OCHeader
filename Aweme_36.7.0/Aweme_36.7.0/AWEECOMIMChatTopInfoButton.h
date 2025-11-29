@class NSString, AWEECOMIMChatTopInfoButtonStyle, NSDictionary;

@interface AWEECOMIMChatTopInfoButton : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *buttonName;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *skuURLString;
@property (copy, nonatomic) NSString *detailURLString;
@property (copy, nonatomic) NSString *btmDid;
@property (copy, nonatomic) NSString *btmCDid;
@property (retain, nonatomic) AWEECOMIMChatTopInfoButtonStyle *styleInfo;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSString *toastString;
@property (nonatomic) unsigned long long buttonActionType;
@property (copy, nonatomic) NSString *buttonActionTypeString;
@property (copy, nonatomic) NSDictionary *clickTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonActionTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)goodsCardSkipURLString;
- (void).cxx_destruct;

@end
