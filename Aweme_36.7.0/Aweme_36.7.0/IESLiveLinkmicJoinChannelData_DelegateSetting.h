@class NSString, HTSLiveImage;

@interface IESLiveLinkmicJoinChannelData_DelegateSetting : IESLivePBBaseMessage

@property (nonatomic) BOOL showPanel;
@property (nonatomic) BOOL enableDelegate;
@property (retain, nonatomic) HTSLiveImage *tagImageURL;
@property (nonatomic) BOOL hasTagImageURL;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) int status;

+ (id)descriptor;

@end
