@class NSString;

@interface DYALoginShowSSOModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showQQ;
@property (nonatomic) BOOL showWechat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
