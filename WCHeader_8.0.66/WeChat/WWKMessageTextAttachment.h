@class NSString;

@interface WWKMessageTextAttachment : WWKMessageAttachment

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *msgInfoID;

- (id)initWithDict:(id)a0;
- (id)writeToDict:(id)a0;
- (void).cxx_destruct;

@end
