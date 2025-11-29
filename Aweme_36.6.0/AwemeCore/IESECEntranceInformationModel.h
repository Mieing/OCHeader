@class NSString, IESECURLModel;

@interface IESECEntranceInformationModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *entranceIcon;
@property (copy, nonatomic) NSString *entranceUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
