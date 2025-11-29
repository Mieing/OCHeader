@class TIMXOMessagesDataSourceIntegrityConfig;

@interface TIMXOMessagesDataSourceIntegrityConfigBuilder : NSObject

@property (retain, nonatomic) TIMXOMessagesDataSourceIntegrityConfig *config;
@property (readonly, copy, nonatomic) id /* block */ allFiltered;
@property (readonly, copy, nonatomic) id /* block */ minIndexV1;
@property (readonly, copy, nonatomic) id /* block */ minIndexV2;
@property (readonly, copy, nonatomic) id /* block */ limit;
@property (readonly, copy, nonatomic) id /* block */ messages;
@property (readonly, copy, nonatomic) id /* block */ compensation;
@property (readonly, copy, nonatomic) id /* block */ dbHasMore;
@property (readonly, copy, nonatomic) id /* block */ serverHasMore;
@property (readonly, copy, nonatomic) id /* block */ conversation;
@property (readonly, copy, nonatomic) id /* block */ context;
@property (readonly, copy, nonatomic) id /* block */ compensationContext;
@property (readonly, copy, nonatomic) id /* block */ currentMessagesFiltered;
@property (readonly, copy, nonatomic) id /* block */ build;

+ (id)builder;

- (void).cxx_destruct;
- (id)init;

@end
