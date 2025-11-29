@class NSString, NSData;

@interface WAScreenshotContextInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *assetId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *enterPath;
@property (copy, nonatomic) NSString *forwardSceneNote;
@property (nonatomic) unsigned int showSourceView;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imageKey;
@property (weak, nonatomic) id weakUserInfo;
@property (nonatomic) unsigned int versionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_assetId;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_enterPath;
+ (void)PBArrayAdd_forwardSceneNote;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_showSourceView;
+ (void)PBArrayAdd_versionType;
+ (void)initialize;
+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

@end
