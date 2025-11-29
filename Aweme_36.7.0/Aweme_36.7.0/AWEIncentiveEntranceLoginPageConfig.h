@class NSString;

@interface AWEIncentiveEntranceLoginPageConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *themeId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldShowHalfPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
