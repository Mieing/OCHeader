@class NSString;

@interface AWEIMStrangerChatCellUtilComponent : AWEIMComponentBase <AWEIMStrangerChatCellUtilInterface>

@property (copy, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (id)b2cTouchTag;
- (id)p_generateTag;
- (void).cxx_destruct;
- (double)cellHeight;

@end
