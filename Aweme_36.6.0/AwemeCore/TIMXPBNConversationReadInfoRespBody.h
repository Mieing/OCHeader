@class NSMutableArray;

@interface TIMXPBNConversationReadInfoRespBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *readInfoArray;
@property (readonly, nonatomic) unsigned long long readInfoArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) long long nextVersion;
@property (nonatomic) BOOL hasNextVersion;

+ (id)descriptor;

- (long long)nextVersion;
- (id)readInfoArray;
- (BOOL)hasMore;

@end
