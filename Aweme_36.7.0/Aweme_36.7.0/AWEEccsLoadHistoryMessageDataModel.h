@class NSArray;

@interface AWEEccsLoadHistoryMessageDataModel : IESLiveBridgeModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *messages;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
