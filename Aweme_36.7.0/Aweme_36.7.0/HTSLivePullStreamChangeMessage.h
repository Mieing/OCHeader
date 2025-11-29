@class NSString, HTSLiveCommon;

@interface HTSLivePullStreamChangeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *subScene;
@property (nonatomic) int randomMilliseconds;

+ (id)descriptor;

@end
