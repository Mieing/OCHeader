@class NSString;

@interface IESECLiveCardExtendTableHeaderModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
