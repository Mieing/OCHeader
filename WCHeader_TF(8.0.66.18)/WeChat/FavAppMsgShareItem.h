@class NSString, NSDate;

@interface FavAppMsgShareItem : FavoritesModel

@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) BOOL nativePage;
@property (copy, nonatomic) NSString *srcUsername;
@property (copy, nonatomic) NSString *srcDisplayName;
@property (copy, nonatomic) NSString *cover;
@property (retain, nonatomic) NSDate *pubTime;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (copy, nonatomic) NSString *vid;
@property (nonatomic) unsigned int funcFlag;
@property (nonatomic) BOOL isPaySubscribe;
@property (copy, nonatomic) NSString *coverPicImageUrl;
@property (nonatomic) long long picCount;
@property (nonatomic) double coverPicWidth;
@property (nonatomic) double coverPicHeight;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)toXML;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void).cxx_destruct;

@end
