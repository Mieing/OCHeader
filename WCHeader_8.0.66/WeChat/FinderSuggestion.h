@class NSString;

@interface FinderSuggestion : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *suggest;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long hot;
@property (retain, nonatomic) NSString *highlightSuggest;

+ (void)initialize;

@end
