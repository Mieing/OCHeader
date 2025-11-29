@class NSString;

@interface AWEIMMessageListMessageDetailComponent : AWEIMComponentBase <AWEIMMessageDetailInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)loadMessageDetailWithServerMessageID:(long long)a0 completion:(id /* block */)a1;

@end
