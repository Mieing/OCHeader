@class NSString;

@interface MPScreenshotArticleInfo : NSObject

@property (copy, nonatomic) NSString *imageId;
@property (copy, nonatomic) NSString *articleUrl;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned long long bizuin;
@property (nonatomic) unsigned long long mid;
@property (nonatomic) unsigned int idx;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)toXML;
- (void).cxx_destruct;

@end
