@class NSString;

@interface AWECoverSearchHistoryAddWordsModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *wordReason;
@property (copy, nonatomic) NSString *timeStamp;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
