@class NSMutableDictionary;

@interface HTSLiveCommonDot : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) long long priority;
@property (nonatomic) int style;
@property (nonatomic) int appearMode;
@property (nonatomic) int disappearMode;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
