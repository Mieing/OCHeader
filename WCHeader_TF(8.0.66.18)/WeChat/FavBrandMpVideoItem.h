@class NSString;

@interface FavBrandMpVideoItem : FavoritesModel

@property (copy, nonatomic) NSString *bizUsrName;
@property (copy, nonatomic) NSString *bizNickName;
@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *videoUrl;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *thumbUrl;
@property (nonatomic) double thumbWidth;
@property (nonatomic) double thumbHeight;

- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (BOOL)checkData;
- (id)description;
- (void).cxx_destruct;

@end
