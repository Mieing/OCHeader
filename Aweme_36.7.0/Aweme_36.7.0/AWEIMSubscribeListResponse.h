@class NSArray, NSString;

@interface AWEIMSubscribeListResponse : AWEBaseApiModel <AWEIMSubscribeListResponseProtocol>

@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL hasNew;
@property (copy, nonatomic) NSArray *cardList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)hasNewJSONTransformer;
+ (id)isMuteJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
