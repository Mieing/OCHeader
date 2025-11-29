@class NSString, BrandFinderLiveDataWrapperMedia;

@interface BrandFinderLiveDataWrapper : NSObject <NSCopying>

@property (copy, nonatomic) NSString *finderUserName;
@property (nonatomic) unsigned long long liveID;
@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *exportId;
@property (copy, nonatomic) NSString *finderNickName;
@property (copy, nonatomic) NSString *headUrl;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long finderLiveStatus;
@property (nonatomic) unsigned int finderLiveReplayStatus;
@property (nonatomic) double liveExtFlag;
@property (copy, nonatomic) NSString *authIconUrl;
@property (copy, nonatomic) NSString *authIconTypeStr;
@property (retain, nonatomic) BrandFinderLiveDataWrapperMedia *media;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *recommendReason;
@property (nonatomic) unsigned int liveFlag;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBizProfileFinderLiveInfo:(id)a0;
- (id)initFromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void)updateDetailDataFromDb;
- (void)fetchDetailDataWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)fetchLiveStatusWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (BOOL)isLive;
- (BOOL)isReplay;
- (BOOL)isValid;
- (BOOL)canForward;
- (id)liveStatusWording:(BOOL)a0;
- (void)internalSetFinderLiveStatus:(unsigned long long)a0 shouldCallExtension:(BOOL)a1;
- (void)internalSetFinderReplayStatus:(unsigned int)a0 shouldCallExtension:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;

@end
