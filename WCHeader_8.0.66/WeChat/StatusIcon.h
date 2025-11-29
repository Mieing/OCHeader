@class NSString, NSMutableArray;

@interface StatusIcon : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconId;
@property (nonatomic) int showType;
@property (retain, nonatomic) NSMutableArray *actions;
@property (nonatomic) int characterSetType;
@property (nonatomic) long long flag;

+ (void)initialize;

@end
