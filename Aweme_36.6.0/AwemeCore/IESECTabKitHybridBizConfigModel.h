@class NSString;

@interface IESECTabKitHybridBizConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL canRefresh;
@property (copy, nonatomic) NSString *noMoreText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
