@class NSString, NSMutableArray;

@interface TingCategoryActionExtraInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int categoryCreateSource;
@property (nonatomic) unsigned int cgiResult;
@property (retain, nonatomic) NSString *loadToFinderUsername;
@property (retain, nonatomic) NSMutableArray *removeListenIdsources;
@property (retain, nonatomic) NSMutableArray *addListenIdsources;
@property (nonatomic) unsigned long long songCount;
@property (nonatomic) unsigned long long isPublic;

+ (void)initialize;

@end
