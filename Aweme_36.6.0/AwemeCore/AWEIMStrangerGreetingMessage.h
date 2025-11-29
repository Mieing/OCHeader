@class NSString;

@interface AWEIMStrangerGreetingMessage : AWEIMGreetingMessage <AWEIMMessageConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (long long)templateType;

@end
