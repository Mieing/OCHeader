@class NSString, NSData;

@interface WWKMessageLinkAttachment : WWKMessageAttachment

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *iconurl;
@property (retain, nonatomic) NSData *icon;

- (id)initWithDict:(id)a0;
- (id)writeToDict:(id)a0;
- (void).cxx_destruct;

@end
