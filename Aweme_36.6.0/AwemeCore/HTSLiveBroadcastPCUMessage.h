@class HTSLiveCommon;

@interface HTSLiveBroadcastPCUMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long awemeLivePreviewPcu;

+ (id)descriptor;

@end
