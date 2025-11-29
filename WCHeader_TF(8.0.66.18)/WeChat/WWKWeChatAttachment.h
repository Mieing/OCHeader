@class NSData;

@interface WWKWeChatAttachment : WWKMessageAttachment

@property (retain, nonatomic) NSData *data;

+ (id)attachment;

- (id)initWithDict:(id)a0;
- (id)writeToDict:(id)a0;
- (void).cxx_destruct;

@end
