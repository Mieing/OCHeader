@class NSString, NSArray, NSDictionary;

@interface AWEUserProfileSpecificationTipActionSheetInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *maskShowTrackingString;
@property (copy, nonatomic) NSString *actionSheetTitle;
@property (copy, nonatomic) NSArray *actionSheetItems;
@property (copy, nonatomic) NSDictionary *maskShowTrackingDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionSheetItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
