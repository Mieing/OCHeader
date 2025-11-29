@interface AWEClassroomImpl.ClassroomDetailFeedbackChatMsgModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL unread;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
