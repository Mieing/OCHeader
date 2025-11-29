@class NSString;

@interface SearchCachalotMessageHandler : NSObject <CachalotMessageHandler>

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerWithMessageID:(id)a0 callBack:(id /* block */)a1;

- (void)handleMessage:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
