@class NSString, HTSLiveCommon;

@interface HTSLiveContentOpenBizCommonMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *bizDefineText;
@property (copy, nonatomic) NSString *bizDefineId;
@property (copy, nonatomic) NSString *bizKey;
@property (copy, nonatomic) NSString *bizExtra;

+ (id)descriptor;

@end
