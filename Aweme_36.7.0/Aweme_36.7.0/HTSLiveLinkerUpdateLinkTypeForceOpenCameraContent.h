@class NSString, IESLiveLinkmicMediaInfo;

@interface HTSLiveLinkerUpdateLinkTypeForceOpenCameraContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) IESLiveLinkmicMediaInfo *linkmicMediaInfo;
@property (nonatomic) BOOL hasLinkmicMediaInfo;

+ (id)descriptor;

@end
