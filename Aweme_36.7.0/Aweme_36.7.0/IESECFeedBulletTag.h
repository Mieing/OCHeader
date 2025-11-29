@class NSString;

@interface IESECFeedBulletTag : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
