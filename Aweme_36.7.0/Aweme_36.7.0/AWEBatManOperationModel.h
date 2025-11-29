@class NSString, NSDictionary;

@interface AWEBatManOperationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *buttonBgColor;
@property (copy, nonatomic) NSDictionary *appData;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
