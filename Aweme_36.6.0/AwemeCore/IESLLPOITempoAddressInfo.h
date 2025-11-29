@class NSArray, IESLLPOITempoAddressSubinfo;

@interface IESLLPOITempoAddressInfo : NSObject

@property (nonatomic) long long maxLine;
@property (retain, nonatomic) IESLLPOITempoAddressSubinfo *titleInfo;
@property (retain, nonatomic) IESLLPOITempoAddressSubinfo *subtitleInfo;
@property (retain, nonatomic) IESLLPOITempoAddressSubinfo *entryInfo;
@property (retain, nonatomic) NSArray *entryList;

- (void).cxx_destruct;

@end
