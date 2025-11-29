@class NSString, IESLiveWalletImageModel;

@interface IESLiveWalletNormalCellModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) IESLiveWalletImageModel *icon;
@property (retain, nonatomic) IESLiveWalletImageModel *light_icon;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *hint;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)light_iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
