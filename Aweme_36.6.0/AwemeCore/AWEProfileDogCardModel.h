@class NSString, NSNumber;

@interface AWEProfileDogCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *dogCardText;
@property (retain, nonatomic) NSNumber *rank;
@property (copy, nonatomic) NSString *rankType;
@property (copy, nonatomic) NSString *rankSchema;
@property (nonatomic) long long dogCardId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
