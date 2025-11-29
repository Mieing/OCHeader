@class NSDictionary, NSString;

@interface AWEHPTopBarMaskConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *tabs;
@property (nonatomic) BOOL replacePlayerMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
