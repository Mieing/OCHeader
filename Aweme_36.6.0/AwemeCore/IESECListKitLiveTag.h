@class NSString, IESECListKitDemoCover;

@interface IESECListKitLiveTag : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long leftSeconds;
@property (retain, nonatomic) IESECListKitDemoCover *icon;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
