@class NSMutableSet;
@protocol TextStateReadLogicDelegate;

@interface TextStateReadLogic : NSObject

@property (retain, nonatomic) NSMutableSet *unreadUsernameCacheSet;
@property (retain, nonatomic) NSMutableSet *readUsernameCacheSet;
@property (weak, nonatomic) id<TextStateReadLogicDelegate> delegate;

- (id)init;
- (void)initData;
- (void)setReadForTextState:(id)a0;
- (BOOL)isReadForTextStateWithId:(id)a0;
- (BOOL)isTextStateReadWithUsername:(id)a0;
- (BOOL)hasUnreadTextStateContact;
- (void)clearCache;
- (void)clearCacheForUsername:(id)a0;
- (void).cxx_destruct;

@end
