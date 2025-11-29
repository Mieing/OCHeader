@class NSString;

@interface LabelPair : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *labelName;
@property (nonatomic) unsigned int labelId;

+ (void)initialize;

- (void)setLabelId:(unsigned int)a0;
- (unsigned int)labelId;
- (void)setLabelName:(id)a0;
- (id)labelName;

@end
