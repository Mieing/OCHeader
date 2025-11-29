@class NSString;

@interface AWEUGCTopicComposerTextInputPageStrategy : NSObject <AWEUGCTopicComposerStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)removeHashtags:(id)a0;
- (void)configureCommonData:(id)a0 withContext:(id)a1 extraParams:(id)a2;
- (void)configureInfiniEditor:(id)a0 withContext:(id)a1 extraParams:(id)a2;
- (void)configureDataConfig:(id)a0 withContext:(id)a1 extraParams:(id)a2;
- (void)addEditNewHashtag:(id)a0 withStickers:(id)a1;

@end
