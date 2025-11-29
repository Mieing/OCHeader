@class BDPTrackEventInfo, NSString, BDPSTTPKGHeaders, NSURL, NSError, NSDate, BDPRequestMetrics;

@interface BDPODRXResolveResult : NSObject <BDPODRXResolveResultInfo, NSCopying>

@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSURL *requestURL;
@property (nonatomic) unsigned long long statusCode;
@property (nonatomic) long long totalBytes;
@property (nonatomic) long long responseTotalBytes;
@property (copy, nonatomic) NSString *contentEncoding;
@property (retain, nonatomic) BDPRequestMetrics *metrics;
@property (nonatomic) BOOL useSortedUrls;
@property (nonatomic) BOOL useTTNet;
@property (nonatomic) long long readType;
@property (nonatomic) long long appType;
@property (copy, nonatomic) BDPTrackEventInfo *trackInfo;
@property (nonatomic) BOOL addGzip;
@property (retain, nonatomic) BDPSTTPKGHeaders *sttpkgHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
