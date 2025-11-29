@class NSString, AWESearchAdModel, AWERiskPreventModel;

@interface AWESearchVideoBusinessConfigModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (copy, nonatomic) NSString *correctName;
@property (copy, nonatomic) NSString *backtrace;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
