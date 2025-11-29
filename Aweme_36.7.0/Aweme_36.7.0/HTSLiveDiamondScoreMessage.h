@class NSString, HTSLiveCommon;

@interface HTSLiveDiamondScoreMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
