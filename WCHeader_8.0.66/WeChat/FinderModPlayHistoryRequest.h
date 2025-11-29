@class NSMutableArray;

@interface FinderModPlayHistoryRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSMutableArray *objectId;
@property (retain, nonatomic) NSMutableArray *collectionTopicIds;

+ (void)initialize;

@end
