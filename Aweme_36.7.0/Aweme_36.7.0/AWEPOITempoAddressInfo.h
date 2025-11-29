@class NSArray, AWEPOITempoAddressSubinfo;

@interface AWEPOITempoAddressInfo : NSObject

@property (nonatomic) long long maxLine;
@property (retain, nonatomic) AWEPOITempoAddressSubinfo *titleInfo;
@property (retain, nonatomic) AWEPOITempoAddressSubinfo *subtitleInfo;
@property (retain, nonatomic) AWEPOITempoAddressSubinfo *entryInfo;
@property (retain, nonatomic) NSArray *entryList;

- (void).cxx_destruct;

@end
