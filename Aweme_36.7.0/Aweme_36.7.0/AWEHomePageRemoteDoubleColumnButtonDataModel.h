@class AWEHomePageRemoteCommonButtonDataModel, NSString;

@interface AWEHomePageRemoteDoubleColumnButtonDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEHomePageRemoteCommonButtonDataModel *singleColumnModel;
@property (retain, nonatomic) AWEHomePageRemoteCommonButtonDataModel *doubleColumnModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleColumnModelJSONTransformer;
+ (id)doubleColumnModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isModelValid;

@end
