@class NSArray, NSString, AWEGrouponTaskDispatchLynxEventInfoModel;

@interface AWEGrouponTaskDispatchLynxModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *targetCard;
@property (copy, nonatomic) NSString *sendType;
@property (copy, nonatomic) AWEGrouponTaskDispatchLynxEventInfoModel *eventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)targetCardJSONTransformer;
+ (id)eventInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
