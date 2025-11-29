@class NSString;

@interface IESECAsyncAttributedWebImageGenerator : IESECAttributedAttachmentGenerator

@property (copy, nonatomic) NSString *url;

- (id)initWithImageUrl:(id)a0;
- (id)generateAsyncAttributedContent;
- (void).cxx_destruct;

@end
