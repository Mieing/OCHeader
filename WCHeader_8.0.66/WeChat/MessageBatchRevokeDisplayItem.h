@class NSString, OrderedDictionary;

@interface MessageBatchRevokeDisplayItem : MMObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isAllRead;
@property (retain, nonatomic) NSString *chatUserName;
@property (retain, nonatomic) OrderedDictionary *messages;
@property (nonatomic) BOOL isFolding;

+ (id)msgIdOfWrap:(id)a0 chatName:(id)a1;

- (id)initWithChatName:(id)a0;
- (BOOL)shouldFold:(id)a0 chatName:(id)a1;
- (BOOL)shouldShowExpandBtn:(id)a0;
- (BOOL)shouldShowTime:(id)a0;
- (BOOL)isFoldEnabled;
- (void).cxx_destruct;

@end
