@class NSString, HTSLiveCommon;

@interface HTSLivePreviewBlockMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *toUserId;

+ (id)descriptor;

@end
