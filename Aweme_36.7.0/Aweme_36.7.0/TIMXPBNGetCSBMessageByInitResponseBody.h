@class NSMutableArray;

@interface TIMXPBNGetCSBMessageByInitResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) long long nextInitVersion;
@property (nonatomic) BOOL hasNextInitVersion;

+ (id)descriptor;

@end
