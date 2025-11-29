@class NSString, NSDictionary, NSArray;

@interface AWEIMPushGuideSelection : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *selectionTitle;
@property (copy, nonatomic) NSString *selectionTypeDes;
@property (copy, nonatomic) NSString *iconUrlString;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSDictionary *actions;
@property (copy, nonatomic) NSArray *settingsActions;
@property (copy, nonatomic) NSArray *pushGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pushGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
