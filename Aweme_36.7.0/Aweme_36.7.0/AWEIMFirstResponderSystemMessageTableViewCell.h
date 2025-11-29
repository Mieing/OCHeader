@class NSString;

@interface AWEIMFirstResponderSystemMessageTableViewCell : AWEIMSystemMessageTableViewCell <AWEIMFirstResponderMessageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)firstResponderContainerView;
- (id)findFirstResponder:(id)a0;

@end
