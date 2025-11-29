@class NSString, IESECURLModel, IESECTabKitBizConfigModel;

@interface IESECTabKitNavItemModel : MTLModel <MTLJSONSerializing> {
    NSString *_jsonString;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *clickURL;
@property (retain, nonatomic) IESECURLModel *image;
@property (retain, nonatomic) IESECTabKitBizConfigModel *bizConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)toJSON;

@end
