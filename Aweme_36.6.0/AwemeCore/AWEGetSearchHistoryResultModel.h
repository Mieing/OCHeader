@class NSArray;

@interface AWEGetSearchHistoryResultModel : IESLiveBridgeModel

@property (retain, nonatomic) id data;
@property (copy, nonatomic) NSArray *historyArray;
@property (nonatomic) BOOL isNormalSearchHistoryWordChanged;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
