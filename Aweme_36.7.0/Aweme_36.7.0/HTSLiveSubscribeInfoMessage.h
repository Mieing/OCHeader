@class HTSLiveCommon;

@interface HTSLiveSubscribeInfoMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) BOOL isMember;

+ (id)descriptor;

@end
