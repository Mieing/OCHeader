@class NSString;

@interface TabConfig : IESLivePBBaseMessage

@property (nonatomic) int tabKey;
@property (copy, nonatomic) NSString *tabText;

+ (id)descriptor;

@end
