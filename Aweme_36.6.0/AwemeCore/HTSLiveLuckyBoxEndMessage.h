@class NSString, HTSLiveCommon;

@interface HTSLiveLuckyBoxEndMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long boxId;
@property (copy, nonatomic) NSString *boxIdStr;

+ (id)descriptor;

@end
