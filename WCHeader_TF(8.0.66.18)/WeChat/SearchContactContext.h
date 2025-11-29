@class NSString, AdContext, H5Context, MiniprogramContext;

@interface SearchContactContext : WXPBGeneratedMessage

@property (nonatomic) unsigned int geta8KeyScene;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) NSString *searchContext;
@property (retain, nonatomic) MiniprogramContext *miniprogramContext;
@property (retain, nonatomic) AdContext *adContext;
@property (retain, nonatomic) H5Context *h5Context;

+ (void)initialize;

@end
