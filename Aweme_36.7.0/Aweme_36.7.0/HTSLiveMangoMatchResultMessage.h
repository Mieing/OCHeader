@class NSData, HTSLiveCommon;

@interface HTSLiveMangoMatchResultMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSData *bizMsg;

+ (id)descriptor;

@end
