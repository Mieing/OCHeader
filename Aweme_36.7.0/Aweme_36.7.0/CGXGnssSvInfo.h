@class NSArray;

@interface CGXGnssSvInfo : NSObject

@property (retain, nonatomic) NSArray *types;
@property (retain, nonatomic) NSArray *prns;
@property (retain, nonatomic) NSArray *snrs;
@property (retain, nonatomic) NSArray *azimuths;
@property (retain, nonatomic) NSArray *gnssFlags;
@property (retain, nonatomic) NSArray *cn0dbhzs;
@property (retain, nonatomic) NSArray *elevations;
@property (retain, nonatomic) NSArray *svids;

- (void).cxx_destruct;
- (id)description;

@end
