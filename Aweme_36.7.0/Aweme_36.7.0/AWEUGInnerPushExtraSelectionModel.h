@class NSArray, NSDictionary, NSString;

@interface AWEUGInnerPushExtraSelectionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *settingActions;
@property (retain, nonatomic) NSDictionary *actionMap;
@property (retain, nonatomic) NSArray *pushGroups;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *selectionType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrlString;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pushGroupsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
