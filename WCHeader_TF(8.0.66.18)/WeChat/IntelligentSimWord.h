@class NSString, NSArray;

@interface IntelligentSimWord : MMObject

@property (retain, nonatomic) NSString *word;
@property (nonatomic) double confidence;
@property (retain, nonatomic) NSArray *arrSimWordClassificationId;
@property (nonatomic) unsigned int searchCount;
@property (retain, nonatomic) NSArray *arrMessage;
@property (retain, nonatomic) NSArray *arrSimpleMsg;

- (void)copyFieldFromSimWord:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
