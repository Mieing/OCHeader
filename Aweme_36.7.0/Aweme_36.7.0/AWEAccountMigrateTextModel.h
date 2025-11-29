@class NSString;

@interface AWEAccountMigrateTextModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) long long key;
@property (nonatomic) long long action;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
