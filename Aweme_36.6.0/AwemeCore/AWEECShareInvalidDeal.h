@class NSString;

@interface AWEECShareInvalidDeal : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showPanel;
@property (copy, nonatomic) NSString *toastText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
