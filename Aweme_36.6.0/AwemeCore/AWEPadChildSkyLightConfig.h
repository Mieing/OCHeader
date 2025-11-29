@class NSString;

@interface AWEPadChildSkyLightConfig : NSObject <AWESkyLightContainerConfigProtocol>

@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long skyLightType;
@property (nonatomic) long long contentContainerType;
@property (copy, nonatomic) NSString *skyLightResourcePath;
@property (copy, nonatomic) NSString *contentResourcePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateConfigWithPath:(id)a0;
- (void).cxx_destruct;

@end
