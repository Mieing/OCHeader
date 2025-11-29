@class NSArray;

@interface IESIMGroupImpl.GroupBotsInviteListResponse : AWEBaseApiModel {
    void /* function */ bots;
}

@property (nonatomic, copy) NSArray *bots;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;

+ (id)botsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
