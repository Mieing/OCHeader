@class NSString, NSArray;

@interface AWEIMPushGuideModelV4 : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *selectionTitle;
@property (copy, nonatomic) NSArray *selections;
@property (copy, nonatomic) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
