@class NSString;

@interface DynamicCardInfoList_DynamicCardInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long msgId;
@property (retain, nonatomic) NSString *frameSetName;
@property (retain, nonatomic) NSString *frameSetData;
@property (nonatomic) unsigned int pos;

+ (void)initialize;

- (void)setPos:(unsigned int)a0;
- (unsigned int)pos;
- (void)setFrameSetData:(id)a0;
- (id)frameSetData;
- (void)setFrameSetName:(id)a0;
- (id)frameSetName;
- (void)setMsgId:(unsigned long long)a0;
- (unsigned long long)msgId;

@end
