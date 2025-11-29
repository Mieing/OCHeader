@class NSArray, NSString;

@interface AWEIMNotificationResponseModelNewSubsetModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSArray *noticeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
