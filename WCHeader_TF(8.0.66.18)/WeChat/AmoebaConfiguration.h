@class NSMutableArray;
@protocol AmoebaDynamicPublicParamsProvider, AmoebaParamsFormatProtocol;

@interface AmoebaConfiguration : NSObject

@property (nonatomic) unsigned long long viewExposeMinTime;
@property (nonatomic) double viewExposeMinRate;
@property (nonatomic) unsigned long long clickReportInterval;
@property (nonatomic) unsigned long long pageReportPolicy;
@property (nonatomic) unsigned long long viewReportPolicy;
@property (retain, nonatomic) id<AmoebaParamsFormatProtocol> formatter;
@property (retain, nonatomic) id<AmoebaDynamicPublicParamsProvider> dynamicPublicParamsProvider;
@property (retain, nonatomic) NSMutableArray *routers;

+ (id)build:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;

@end
