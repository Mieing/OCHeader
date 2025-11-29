@class NSArray;

@interface AWEIMGroupParticipantInactiveInfoResponse : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (retain, nonatomic) NSArray *inactiveModelList;

+ (id)inactiveModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
