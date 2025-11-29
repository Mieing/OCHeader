@class NSString;

@interface IntelligentClassificationItem : MMObject

@property (nonatomic) unsigned int labelId;
@property (nonatomic) float score;
@property (retain, nonatomic) NSString *labelName;
@property (retain, nonatomic) NSString *originLabelId;

- (void).cxx_destruct;

@end
