@class NSString;

@interface AWEGrouponSecondPrice : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *longText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
