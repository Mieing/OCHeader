@class IESGCPPBDoulinkSimpleGameInfo, IESGCPPBDoulinkBindConf, IESGCPPBRole;

@interface IESGCPPBGetUserBindInfoResponse_Data : GPBMessage

@property (retain, nonatomic) IESGCPPBRole *role;
@property (nonatomic) BOOL hasRole;
@property (retain, nonatomic) IESGCPPBDoulinkSimpleGameInfo *gameInfo;
@property (nonatomic) BOOL hasGameInfo;
@property (retain, nonatomic) IESGCPPBDoulinkBindConf *doulinkBindConf;
@property (nonatomic) BOOL hasDoulinkBindConf;

+ (id)descriptor;

@end
