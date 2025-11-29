@class NSString, AWEURLModel;

@interface ACCBirthdayTemplateModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long effectId;
@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWEURLModel *previewAddr;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
