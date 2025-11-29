@class NSString, NSNumber;

@interface AWEEcommerceSearchLongPressDislikeInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconHeaderURLString;
@property (copy, nonatomic) NSString *dislikeReason;
@property (retain, nonatomic) NSNumber *dislikeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
