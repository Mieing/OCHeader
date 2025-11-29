@class IESGCPPBGameDetailDataChannelConfigStruct, IESGCPPBGameDetailStructureConfigStruct;

@interface IESGCPPBGameDetailCommonMetaData : GPBMessage

@property (retain, nonatomic) IESGCPPBGameDetailDataChannelConfigStruct *dataChannelConfigStruct;
@property (nonatomic) BOOL hasDataChannelConfigStruct;
@property (retain, nonatomic) IESGCPPBGameDetailStructureConfigStruct *structureConfig;
@property (nonatomic) BOOL hasStructureConfig;
@property (nonatomic) BOOL teamPlayStatus;
@property (nonatomic) BOOL interactionPlayStatus;

+ (id)descriptor;

@end
