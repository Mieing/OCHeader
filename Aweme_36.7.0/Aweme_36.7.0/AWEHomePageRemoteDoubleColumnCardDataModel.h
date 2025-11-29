@class NSString, AWEHomePageRemoteCommonCardDataModel;

@interface AWEHomePageRemoteDoubleColumnCardDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEHomePageRemoteCommonCardDataModel *singleColumnModel;
@property (retain, nonatomic) AWEHomePageRemoteCommonCardDataModel *doubleColumnModel;
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
