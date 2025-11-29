@class NSString, IESLiveEmojiCreatHandler;

@interface IESLiveEmojiCreateServiceImpl : NSObject <IESLivePrivilegeGlobalModuleEmojiCreateService>

@property (retain, nonatomic) IESLiveEmojiCreatHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openEmojiCreatePageWithRequestPage:(id)a0 authorId:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
