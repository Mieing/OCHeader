@class NSString;

@interface IESECLiveGoodsBottomImage : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cover;
@property (nonatomic) long long ID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
