@class NSString, HTSLiveImage;

@interface TreasureTouchExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *enterSound;
@property (retain, nonatomic) HTSLiveImage *boxIconAlienURL;
@property (nonatomic) BOOL hasBoxIconAlienURL;
@property (retain, nonatomic) HTSLiveImage *boxIconFinishURL;
@property (nonatomic) BOOL hasBoxIconFinishURL;
@property (retain, nonatomic) HTSLiveImage *boxIconFinishStaticURL;
@property (nonatomic) BOOL hasBoxIconFinishStaticURL;
@property (retain, nonatomic) HTSLiveImage *boxIconNormalURL;
@property (nonatomic) BOOL hasBoxIconNormalURL;
@property (nonatomic) int panelStyleVersion;
@property (nonatomic) BOOL taskCenterOnOauth;
@property (nonatomic) int isEcom;

+ (id)descriptor;

@end
