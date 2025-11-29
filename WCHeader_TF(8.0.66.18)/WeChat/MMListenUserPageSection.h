@class NSString, NSMutableArray;

@interface MMListenUserPageSection : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *categories;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL hasMore;

+ (void)initialize;

@end
