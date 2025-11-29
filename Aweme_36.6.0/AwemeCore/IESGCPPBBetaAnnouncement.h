@class NSString, IESGCPPBBetaNoticeInfo, IESGCPPBBetaButton;

@interface IESGCPPBBetaAnnouncement : GPBMessage

@property (copy, nonatomic) NSString *betaTitle;
@property (copy, nonatomic) NSString *betaStatusStr;
@property (nonatomic) BOOL isQualified;
@property (retain, nonatomic) IESGCPPBBetaButton *betaButton;
@property (nonatomic) BOOL hasBetaButton;
@property (copy, nonatomic) NSString *planId;
@property (nonatomic) BOOL isApplied;
@property (retain, nonatomic) IESGCPPBBetaNoticeInfo *betaNoticeInfo;
@property (nonatomic) BOOL hasBetaNoticeInfo;
@property (nonatomic) int testPlanOpenType;

+ (id)descriptor;

@end
