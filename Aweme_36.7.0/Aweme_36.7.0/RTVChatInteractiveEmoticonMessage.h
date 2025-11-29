@class NSNumber, NSString;

@interface RTVChatInteractiveEmoticonMessage : RTVChatMessage

@property (retain, nonatomic) NSNumber *imageID;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)initWithSender:(id)a0 type:(unsigned long long)a1 content:(id)a2;
- (id)initWithImageID:(id)a0 displayName:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)contentDictionary;

@end
