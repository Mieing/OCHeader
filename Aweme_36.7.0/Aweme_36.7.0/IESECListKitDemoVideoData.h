@class NSString, NSDictionary, IESECListKitDemoAddr, IESECListKitDemoCover;

@interface IESECListKitDemoVideoData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *awemeModelDict;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) long long seconds;
@property (retain, nonatomic) IESECListKitDemoCover *cover;
@property (retain, nonatomic) IESECListKitDemoAddr *addr;
@property (retain, nonatomic) IESECListKitDemoAddr *addrH265;
@property (nonatomic) double currentPlayTime;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *nickname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)toAwemeModelDict;
- (void).cxx_destruct;

@end
