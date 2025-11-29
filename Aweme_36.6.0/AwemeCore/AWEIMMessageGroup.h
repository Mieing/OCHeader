@class NSString, NSArray, NSMutableArray, NSAttributedString;

@interface AWEIMMessageGroup : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double latestMessageTime;
@property (nonatomic) double oldestMessageTime;
@property (retain, nonatomic) NSMutableArray *messageViewModelArray;
@property (nonatomic) unsigned long long groupType;
@property (nonatomic) BOOL invisable;
@property (nonatomic) BOOL hideTimeStamp;
@property (retain, nonatomic) NSAttributedString *attr;
@property (copy, nonatomic) NSString *foldId;
@property (nonatomic) struct CGSize { double width; double height; } foldableTextSize;
@property (retain, nonatomic) NSArray *foldableGroups;

+ (id)groupsWithOrderedMessages:(id)a0 belongToConversation:(id)a1;
+ (id)latestMessageInGroups:(id)a0;
+ (id)groupsWithOrderedMessages:(id)a0;
+ (id)insertMessage:(id)a0 intoGroups:(id)a1 needCheckDuplicate:(BOOL)a2;
+ (id)insertMessage:(id)a0 belongToConversation:(id)a1 intoGroups:(id)a2 needCheckDuplicate:(BOOL)a3;
+ (id)insertMessageViewModel:(id)a0 intoGroups:(id)a1 needCheckDuplicate:(BOOL)a2;
+ (id)insertMessage:(id)a0 intoGroups:(id)a1;
+ (id)deleteMessageWithMessageIdentifier:(id)a0 busiType:(long long)a1 fromGroups:(id)a2;
+ (id)deleteBatchMessageWithMessageIds:(id)a0 fromGroups:(id)a1;
+ (id)oldestMessageInGroups:(id)a0;

- (id)initWithGroupedMessageViewModules:(id)a0;
- (void)insertMessageViewModel:(id)a0 atIndex:(unsigned long long)a1;
- (void)p_updateMessageTime;
- (void)addMessageViewModel:(id)a0;
- (void)removeViewModelAtIndex:(unsigned long long)a0;
- (id)initWithGroupedMessageViewModules:(id)a0 type:(unsigned long long)a1;
- (void)replaceViewModel:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertMessage:(id)a0 atIndex:(unsigned long long)a1;
- (void)updateMessageTime;
- (void).cxx_destruct;
- (void)addMessage:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
