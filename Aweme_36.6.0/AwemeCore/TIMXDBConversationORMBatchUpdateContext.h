@class NSString;
@protocol TIMXConversationModelProtocol, TIMXDBConversationORMUpdateContextProtocol;

@interface TIMXDBConversationORMBatchUpdateContext : NSObject <TIMXDBConversationORMUpdateContextProtocol>

@property (readonly, nonatomic) id<TIMXConversationModelProtocol> conv;
@property (readonly, copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL didChangeConv;
@property (retain, nonatomic) id<TIMXDBConversationORMUpdateContextProtocol> originContext;
@property (readonly, nonatomic) BOOL isAffectSortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUid:(id)a0 conv:(id)a1;
- (void)markAffectSortOrder;
- (void).cxx_destruct;

@end
