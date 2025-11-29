@class NSString;

@interface WCBrandMpVideoItem : NSObject <WCContentShareable>

@property (copy, nonatomic) NSString *bizUsrName;
@property (copy, nonatomic) NSString *bizNickName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *videoVid;
@property (copy, nonatomic) NSString *videoUrl;
@property (nonatomic) double videoDuration;
@property (copy, nonatomic) NSString *thumbUrl;
@property (nonatomic) double thumbWidth;
@property (nonatomic) double thumbHeight;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bizUsrName;
+ (void)PBArrayAdd_bizNickName;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_mpUrl;
+ (void)PBArrayAdd_videoVid;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_videoDuration;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_thumbWidth;
+ (void)PBArrayAdd_thumbHeight;
+ (void)PBArrayAdd_url;
+ (void)initialize;
+ (BOOL)isSupport:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)xmlTag;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toXML;
- (BOOL)checkData;
- (void).cxx_destruct;

@end
