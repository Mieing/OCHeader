@class NSString, NSMutableArray, NSData;

@interface MMListenCategoryFeedLine : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int fromType;
@property (nonatomic) BOOL active;

+ (void)initialize;

@end
