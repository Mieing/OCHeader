@class NSString, NSMutableDictionary;

@interface HTSLiveBarMessage : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) unsigned long long params_Count;

+ (id)descriptor;

@end
