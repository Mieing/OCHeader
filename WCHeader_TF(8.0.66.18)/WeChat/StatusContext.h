@class NSString, NSMutableArray;

@interface StatusContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *statusId;
@property (retain, nonatomic) NSString *statusWord;
@property (retain, nonatomic) NSString *statusDescription;
@property (retain, nonatomic) NSMutableArray *statusTags;

+ (void)initialize;

@end
