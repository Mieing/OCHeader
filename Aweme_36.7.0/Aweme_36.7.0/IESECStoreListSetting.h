@class NSString, IESECURLModel;

@interface IESECStoreListSetting : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long fontSize;
@property (copy, nonatomic) NSString *fontColor;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
