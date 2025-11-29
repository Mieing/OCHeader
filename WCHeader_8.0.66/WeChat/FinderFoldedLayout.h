@class NSString, NSMutableArray;

@interface FinderFoldedLayout : WXPBGeneratedMessage

@property (nonatomic) unsigned int layoutType;
@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int totalCount;

+ (void)initialize;

@end
