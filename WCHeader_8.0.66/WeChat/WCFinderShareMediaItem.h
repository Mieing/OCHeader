@class NSString;

@interface WCFinderShareMediaItem : NSObject <NSCoding, NSCopying, PBCoding>

@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *width;
@property (copy, nonatomic) NSString *height;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *fullCoverUrl;
@property (copy, nonatomic) NSString *fullClipInset;
@property (copy, nonatomic) NSString *videoPlayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_videoPlayDuration;
+ (void)PBArrayAdd_fullCoverUrl;
+ (void)PBArrayAdd_fullClipInset;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)fromBrandXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)toXMLV2;
- (void).cxx_destruct;

@end
