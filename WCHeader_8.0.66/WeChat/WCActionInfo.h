@class NSString;

@interface WCActionInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *mediaTagName;
@property (nonatomic) int scene;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *wordingKey;
@property (retain, nonatomic) NSString *messageExt;
@property (retain, nonatomic) NSString *messageAction;
@property (nonatomic) int appInstalledActionScene;
@property (nonatomic) int appUninstalledActionScene;
@property (retain, nonatomic) NSString *appInstalledWordingKey;
@property (retain, nonatomic) NSString *appUninstalledWordingKey;
@property (retain, nonatomic) NSString *customAppInstalledWording;
@property (retain, nonatomic) NSString *customAppInstalledWording4ZhTw;
@property (retain, nonatomic) NSString *customAppInstalledWording4EnUs;
@property (retain, nonatomic) NSString *customAppUninstalledWording;
@property (retain, nonatomic) NSString *customAppUninstalledWording4ZhTw;
@property (retain, nonatomic) NSString *customAppUninstalledWording4EnUs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mediaTagName;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_wordingKey;
+ (void)PBArrayAdd_messageExt;
+ (void)PBArrayAdd_messageAction;
+ (void)PBArrayAdd_appInstalledActionScene;
+ (void)PBArrayAdd_appUninstalledActionScene;
+ (void)PBArrayAdd_appInstalledWordingKey;
+ (void)PBArrayAdd_appUninstalledWordingKey;
+ (void)PBArrayAdd_customAppInstalledWording;
+ (void)PBArrayAdd_customAppInstalledWording4ZhTw;
+ (void)PBArrayAdd_customAppInstalledWording4EnUs;
+ (void)PBArrayAdd_customAppUninstalledWording;
+ (void)PBArrayAdd_customAppUninstalledWording4ZhTw;
+ (void)PBArrayAdd_customAppUninstalledWording4EnUs;
+ (void)initialize;
+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValidForShow;
- (id)getProperWording;
- (id)getWordingkey;
- (id)messageExtDict;
- (id)toXML;
- (void).cxx_destruct;

@end
