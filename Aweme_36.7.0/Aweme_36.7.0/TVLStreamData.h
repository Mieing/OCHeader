@class NSDictionary, NSURL, NSArray;

@interface TVLStreamData : NSObject

@property (copy, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSURL *LLASHURL;
@property (copy, nonatomic) NSArray *playableURLs;
@property (copy, nonatomic) NSDictionary *ABRLogInfo;
@property (nonatomic) long long codecNotSame;
@property (nonatomic) long long bitrateAbnormal;

+ (id)LLASHURLWithMPD:(id)a0;
+ (id)streamDataWithRawData:(id)a0;

- (id)parseJSONString:(id)a0;
- (id)removeBracketsFromString:(id)a0;
- (id)concatenateJSONStrings:(id)a0 jsonString2:(id)a1;
- (id)commonQueryItems;
- (id)mergeSdkParams:(id)a0 sourceType:(id)a1 resolutionConf:(id)a2;
- (id)LLASHMPDWithPlayableURLs:(id)a0;
- (id)ABRLogInfoWithLLASHMPD:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;

@end
