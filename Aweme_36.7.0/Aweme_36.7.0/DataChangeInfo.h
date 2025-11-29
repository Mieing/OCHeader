@class NSString, NSMutableDictionary;

@interface DataChangeInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) int changeType;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) unsigned long long params_Count;

+ (id)descriptor;

@end
