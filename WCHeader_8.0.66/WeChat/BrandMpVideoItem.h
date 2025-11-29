@class NSString;

@interface BrandMpVideoItem : NSObject <NSCopying, PBCoding>

@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *videoVid;
@property (copy, nonatomic) NSString *videoUrl;
@property (nonatomic) double videoDuration;
@property (nonatomic) double thumbWidth;
@property (nonatomic) double thumbHeight;
@property (nonatomic) BOOL bUseExternalVideoPath;
@property (nonatomic) BOOL bNoNeedRequestNewUrl;
@property (nonatomic) unsigned int subscene;
@property (copy, nonatomic) NSString *videoUrlNew;
@property (nonatomic) BOOL forbidForward;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mpUrl;
+ (void)PBArrayAdd_videoVid;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_videoDuration;
+ (void)PBArrayAdd_thumbWidth;
+ (void)PBArrayAdd_thumbHeight;
+ (void)PBArrayAdd_bUseExternalVideoPath;
+ (void)PBArrayAdd_subscene;
+ (void)PBArrayAdd_videoUrlNew;
+ (void)PBArrayAdd_forbidForward;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (BOOL)checkData;
- (void).cxx_destruct;

@end
