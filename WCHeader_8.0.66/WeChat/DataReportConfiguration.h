@class NSMutableArray;
@protocol DataReportDynamicPublicParamsProvider, DataReportParamsFormatProtocol;

@interface DataReportConfiguration : NSObject

@property (nonatomic) unsigned long long viewExposeMinTime;
@property (nonatomic) double viewExposeMinRate;
@property (nonatomic) unsigned long long clickReportInterval;
@property (nonatomic) unsigned long long pageReportPolicy;
@property (nonatomic) unsigned long long viewReportPolicy;
@property (retain, nonatomic) id<DataReportParamsFormatProtocol> formatter;
@property (retain, nonatomic) id<DataReportDynamicPublicParamsProvider> dynamicPublicParamsProvider;
@property (retain, nonatomic) NSMutableArray *callbacks;

+ (id)build:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;

@end
