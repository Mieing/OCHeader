@class NSString;

@interface AWEVideoInteractButton : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long userState;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *iconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
