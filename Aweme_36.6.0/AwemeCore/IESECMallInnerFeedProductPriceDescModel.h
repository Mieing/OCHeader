@class NSNumber, NSString;

@interface IESECMallInnerFeedProductPriceDescModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
