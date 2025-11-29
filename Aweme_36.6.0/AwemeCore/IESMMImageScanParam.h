@class IESMMQRScanArea;

@interface IESMMImageScanParam : NSObject

@property (nonatomic) BOOL useExtORI;
@property (retain, nonatomic) IESMMQRScanArea *scanArea;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL enableDetect;
@property (nonatomic) unsigned long long scanType;
@property (nonatomic) BOOL enhanceCamera;

- (id)initWithAlgorithm:(unsigned long long)a0 useExtORI:(BOOL)a1 scanArea:(id)a2 timeout:(double)a3;
- (void).cxx_destruct;

@end
