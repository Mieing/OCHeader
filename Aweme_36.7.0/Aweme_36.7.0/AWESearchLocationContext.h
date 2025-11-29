@class NSArray, AWEPOIShowPoiPickerMoreParamsModel;

@interface AWESearchLocationContext : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *locationInfos;
@property (nonatomic) BOOL splitDomains;
@property (nonatomic) BOOL isOversea;
@property (retain, nonatomic) AWEPOIShowPoiPickerMoreParamsModel *moreParams;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ selectLocationBlock;

- (id)initWithType:(unsigned long long)a0 locationInfos:(id)a1 splitDomains:(BOOL)a2 isOversea:(BOOL)a3 moreParams:(id)a4 cancelBlock:(id /* block */)a5 selectLocationBlock:(id /* block */)a6;
- (void).cxx_destruct;

@end
