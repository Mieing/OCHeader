@class NSString;

@interface AWEAdDescTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prefixTagText;
@property (copy, nonatomic) NSString *realTagText;
@property (copy, nonatomic) NSString *openUrl;
@property (nonatomic) long long tagIconType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
