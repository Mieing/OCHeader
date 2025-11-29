@class NSString;

@interface BrandFinderLiveDataWrapperMedia : NSObject <NSCopying>

@property (copy, nonatomic) NSString *coverUrl;
@property (nonatomic) double width;
@property (nonatomic) double height;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)description;
- (void).cxx_destruct;

@end
