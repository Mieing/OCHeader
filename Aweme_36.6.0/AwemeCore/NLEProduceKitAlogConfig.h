@class NSString;

@interface NLEProduceKitAlogConfig : NSObject

@property (retain, nonatomic) NSString *alogrithmsName;
@property (nonatomic) double cropRatio;
@property (nonatomic) long long onlyCrop;
@property (retain, nonatomic) NSString *startFrameUrl;
@property (nonatomic) long long topN;

- (void).cxx_destruct;

@end
