@class NSString, NSDictionary;

@interface IESDPBParseConfig : NSObject

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSDictionary *definitionDic;
@property (copy, nonatomic) NSDictionary *shrinkConfigDic;
@property (copy, nonatomic) NSString *dataMessage;
@property (copy, nonatomic) NSString *dataShrink;
@property (copy, nonatomic) NSString *extraMessage;
@property (copy, nonatomic) NSString *extraShrink;
@property (nonatomic) BOOL shouldCompleteIDLField;
@property (nonatomic) BOOL dataRepeatable;
@property (readonly, nonatomic) BOOL numberToString;

- (void)setNumberToString:(BOOL)a0;
- (id)initWithExtras:(id)a0;
- (void).cxx_destruct;

@end
