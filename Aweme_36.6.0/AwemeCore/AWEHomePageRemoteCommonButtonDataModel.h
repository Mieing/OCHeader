@class NSString, AWEHomePageRemoteCommonImageModel;

@interface AWEHomePageRemoteCommonButtonDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing, NSCopying>

@property (nonatomic) long long moduleType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *selectedTitle;
@property (nonatomic) long long iconPosition;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *iconModel;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *selectedIconModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconModelJSONTransformer;
+ (id)selectedIconModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isModelValid;

@end
