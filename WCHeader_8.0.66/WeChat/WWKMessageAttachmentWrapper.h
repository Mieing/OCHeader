@class WWKMessageAttachment, NSString, NSData, NSDate;

@interface WWKMessageAttachmentWrapper : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSData *avatarData;
@property (retain, nonatomic) WWKMessageAttachment *attachment;

- (id)initWithDict:(id)a0;
- (id)writeToDict:(id)a0;
- (void).cxx_destruct;

@end
