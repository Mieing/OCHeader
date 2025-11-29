@class NSString, HTSLiveCommon;

@interface HTSLiveCommerceMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
