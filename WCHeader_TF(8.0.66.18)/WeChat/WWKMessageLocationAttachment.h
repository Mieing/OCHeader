@class NSString;

@interface WWKMessageLocationAttachment : WWKMessageAttachment

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) double zoom;

- (id)initWithDict:(id)a0;
- (id)writeToDict:(id)a0;
- (void).cxx_destruct;

@end
