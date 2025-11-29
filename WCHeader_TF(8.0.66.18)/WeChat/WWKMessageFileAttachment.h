@class NSString, NSData;

@interface WWKMessageFileAttachment : WWKMessageAttachment

@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSData *data;

- (id)initWithDict:(id)a0;
- (id)writeToDict:(id)a0;
- (void).cxx_destruct;

@end
