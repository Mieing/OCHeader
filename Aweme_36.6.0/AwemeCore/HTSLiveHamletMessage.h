@class NSString, HTSLiveCommon;

@interface HTSLiveHamletMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
