@class NSString;

@interface AWEClassroomImpl.ClassroomDetailFeedbackChatUrlModel : MTLModel <MTLJSONSerializing> {
    void /* function */ feedbackChatSchema;
}

@property (nonatomic, copy) NSString *feedbackChatSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
