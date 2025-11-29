@class NSString, NSDictionary, IESECPdpStdLynxConfig, IESECPdpStdLynxElementLocation;

@interface IESECPdpStdLynxElement : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *megaData;
@property (copy, nonatomic) NSDictionary *query;
@property (copy, nonatomic) NSString *lynxID;
@property (nonatomic) double width;
@property (nonatomic) long long widthType;
@property (nonatomic) double height;
@property (nonatomic) long long heightType;
@property (retain, nonatomic) IESECPdpStdLynxElementLocation *location;
@property (retain, nonatomic) IESECPdpStdLynxConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
