@class NSString, TIMXSDKInstance;

@interface TIMXECOMUpdateConversationHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long shortID;
@property (nonatomic) int conversationType;
@property (nonatomic) int inbox;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithId:(id)a0 completion:(id /* block */)a1;
- (void)updateWithId:(id)a0 shortId:(long long)a1 type:(int)a2 inbox:(int)a3 completion:(id /* block */)a4;
- (void)updateAndFetchNewestMessageIndexWithId:(id)a0 completion:(id /* block */)a1;
- (void)runWithIsFetchNewestMessageIndex:(BOOL)a0;
- (void)requestConversationInfoWithIsFetchNewestMessageIndex:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
