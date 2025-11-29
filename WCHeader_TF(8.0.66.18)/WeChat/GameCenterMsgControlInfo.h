@interface GameCenterMsgControlInfo : NSObject

@property (nonatomic) int controlFlag;
@property (nonatomic) int filterFlag;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int expiredTime;
@property (nonatomic) BOOL notInMsgCenter;

+ (id)parseFromXml:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (BOOL)shouldShowFindFriendEntry;
- (BOOL)shouldShowMsgCenterCellSource;
- (BOOL)canClickMsgCenterCellSource;

@end
