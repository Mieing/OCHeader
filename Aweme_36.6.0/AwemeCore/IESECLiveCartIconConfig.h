@class NSString;

@interface IESECLiveCartIconConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *animatedIconURLString;
@property (retain, nonatomic) NSString *staticIconURLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
