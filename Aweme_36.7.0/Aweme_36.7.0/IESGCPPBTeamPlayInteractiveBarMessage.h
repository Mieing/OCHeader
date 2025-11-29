@class HTSLiveCommon;

@interface IESGCPPBTeamPlayInteractiveBarMessage : GPBMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
