@class NSString;

@interface IESIMPublishMessageEditorComponent : AWEIMComponentBase <AWEPublishTaskMessage, AWEIMPostMessageEditorProtocol>

@property (copy, nonatomic) NSString *createID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)componentDidMounted:(id)a0;
- (void)enterEditWithVideoUrl:(id)a0 query:(id)a1 extra:(id)a2;
- (BOOL)isMessageValidForPost:(id)a0;
- (BOOL)p_isSelfSeenMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
