@class NSString, AWEURLModel;

@interface AWEProfileExtensionAreaDiamondDataInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *dynamicIconURLModel;
@property (retain, nonatomic) AWEURLModel *staticIconURLModel;
@property (copy, nonatomic) NSString *hintText;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) BOOL isForcedDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicIconURLModelJSONTransformer;
+ (id)staticIconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
