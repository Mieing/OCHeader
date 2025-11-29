@class NSString, UIImage;

@interface AWEPublishAIWaterMarkIcon : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *defaultIcon;
@property (retain, nonatomic) UIImage *iconImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)downloadIconImageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
