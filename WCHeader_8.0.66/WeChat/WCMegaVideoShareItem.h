@class NSString, NSArray, WCFinderShareAttachInfo;

@interface WCMegaVideoShareItem : NSObject <NSCoding, NSCopying, PBCoding>

@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *objectNonceId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *mediaCount;
@property (retain, nonatomic) NSArray *mediaList;
@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) WCFinderShareAttachInfo *finderInfo;
@property (nonatomic) unsigned long long authIconType;
@property (retain, nonatomic) NSString *authIconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_mediaCount;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_finderInfo;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_authIconUrl;
+ (void)initialize;
+ (id)nodeName;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (id)toXMLV2;
- (id)getTimelineDesc;
- (id)getGallaryDesc;
- (id)converToShareFeedItem;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
