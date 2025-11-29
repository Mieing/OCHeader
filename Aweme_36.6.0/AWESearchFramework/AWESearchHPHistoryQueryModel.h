@class NSString, NSArray;

@interface AWESearchHPHistoryQueryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *imageInfoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
