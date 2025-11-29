@class NSString;

@interface AWEGetSearchHistoryHistoryArrayModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *timeStamp;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordReason;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
