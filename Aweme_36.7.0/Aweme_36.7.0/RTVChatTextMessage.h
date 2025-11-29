@class NSString;

@interface RTVChatTextMessage : RTVChatMessage

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)initWithSender:(id)a0 type:(unsigned long long)a1 content:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithText:(id)a0;
- (void)updateText:(id)a0;
- (id)contentDictionary;

@end
