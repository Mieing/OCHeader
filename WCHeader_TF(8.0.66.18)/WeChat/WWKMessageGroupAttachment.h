@class NSArray, NSString, WWKWeChatAttachment;

@interface WWKMessageGroupAttachment : WWKMessageAttachment

@property (copy, nonatomic) NSArray *contents;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long forwardType;
@property (retain, nonatomic) WWKWeChatAttachment *dataBuff;

- (id)initWithDict:(id)a0;
- (id)writeToDict:(id)a0;
- (void).cxx_destruct;

@end
