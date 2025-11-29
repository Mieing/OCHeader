@class NSString;

@interface AWEFlashMobButtonViewModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *buttonIconUrl;
@property (retain, nonatomic) NSString *buttonIconColor;
@property (retain, nonatomic) NSString *buttonTextColor;
@property (retain, nonatomic) NSString *buttonBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
