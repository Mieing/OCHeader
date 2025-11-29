@class AWEPushExtraSiriSuggestConfigModel, NSString, NSDictionary, NSArray;

@interface AWEPushContentSiriSuggestConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *protectedSiriUserInfo;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *scheme;
@property (retain, nonatomic) AWEPushExtraSiriSuggestConfigModel *extraModel;
@property (copy, nonatomic) NSArray *expiredGroupIDs;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) BOOL isFromV3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraModelJSONTransformer;
+ (id)groupIDJSONTransformer;
+ (id)extendedModelFromJsonString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
