@class NSString, HTSLiveCommon;

@interface HTSLiveBridgeData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *bridgeMessageJson;

+ (id)descriptor;

@end
