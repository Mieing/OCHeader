@class NSString, IESGCPPBUpdateAnnouncement, IESGCPPBBetaAnnouncement;

@interface IESGCPPBDetailAnnouncementV2 : GPBMessage

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) IESGCPPBBetaAnnouncement *betaAnnouncement;
@property (nonatomic) BOOL hasBetaAnnouncement;
@property (copy, nonatomic) NSString *bgColor;
@property (retain, nonatomic) IESGCPPBUpdateAnnouncement *updateAnnouncement;
@property (nonatomic) BOOL hasUpdateAnnouncement;

+ (id)descriptor;

@end
