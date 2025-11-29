@class NSNumber, NSString;

@interface AWELiveLocalLifeMemberInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isMember;
@property (nonatomic) BOOL isMemberExclusive;
@property (copy, nonatomic) NSNumber *memberPrice;
@property (nonatomic) BOOL hasMemberPrice;
@property (copy, nonatomic) NSString *showPriceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
