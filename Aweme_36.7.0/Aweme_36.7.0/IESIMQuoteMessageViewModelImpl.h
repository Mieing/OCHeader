@class NSString;

@interface IESIMQuoteMessageViewModelImpl : NSObject <IESIMQuoteMessageViewModelInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (id)supportMenuItemsWithMessage:(id)a0 shouldShowQuoteReplyMenuItem:(BOOL)a1 shouldShowRecallMenuItem:(BOOL)a2 shouldShowEditMenuItem:(BOOL)a3;

@end
