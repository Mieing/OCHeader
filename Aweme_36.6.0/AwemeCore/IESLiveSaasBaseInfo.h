@class NSString, NSMutableDictionary;

@interface IESLiveSaasBaseInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *hostNickname;
@property (nonatomic) long long xiguaUid;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
