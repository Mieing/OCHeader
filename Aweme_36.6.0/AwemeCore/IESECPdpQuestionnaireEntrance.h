@class NSString, IESECPdpQuestionnaireEntranceConfig;

@interface IESECPdpQuestionnaireEntrance : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxURL;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) IESECPdpQuestionnaireEntranceConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
