@class NSString, TIMXSDKInstance;

@interface TIMXMessagesOrderByOrderIndexReverseIterator : TIMXMessagesIterator <TIMXMessagesOrderByOrderIndexReverseIteratorProtocol, TIMXInstanceScopeAlwaysNewDIComponent> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long currentCursor;
@property (nonatomic) long long startCursor;
@property (nonatomic) long long endCursor;
@property (nonatomic) long long belongingUser;
@property (retain, nonatomic) NSString *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)next;
- (id)initWithRootObject:(id)a0;

@end
