@class NSMutableDictionary;

@interface WCFinderCGIProfile : NSObject

@property (nonatomic) unsigned long long cgiId;
@property (nonatomic) unsigned long long totalCostMS;
@property (nonatomic) unsigned long long connCostMS;
@property (nonatomic) unsigned long long startPacketCostMS;
@property (nonatomic) unsigned long long tlsCostMS;
@property (nonatomic) unsigned long long readPacketCostMS;
@property (nonatomic) unsigned long long reqSize;
@property (nonatomic) unsigned long long respSize;
@property (nonatomic) unsigned long long encodeCostMS;
@property (nonatomic) unsigned long long decodeCostMS;
@property (retain, nonatomic) NSMutableDictionary *extInfo;
@property (nonatomic) unsigned long long cbkBeginMS;
@property (nonatomic) unsigned long long cbkEndMS;

+ (id)profileWithCGIId:(unsigned long long)a0;
+ (id)fromResponse:(id)a0;

- (id)toJson:(id /* block */)a0;
- (void)attachToResponse:(id)a0;
- (void).cxx_destruct;

@end
