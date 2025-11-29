@class NSString, NSData;

@interface WWKMessageMiniProgramAttachment : WWKMessageAttachment

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSData *hdImageData;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long miniProgramType;

- (id)initWithDict:(id)a0;
- (id)writeToDict:(id)a0;
- (void).cxx_destruct;

@end
