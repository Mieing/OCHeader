@class NSString;

@interface TIMXUserCounter : NSObject <TIMXUserCounterProtocol, TIMXInstanceScopeAlwaysNewDIComponent>

@property (nonatomic) long long conversationShortId;
@property (nonatomic) int conversationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootObject:(id)a0;

@end
