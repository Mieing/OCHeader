@class NSString, NSNumber, BDSimURLObject;

@interface BDSimVideoBSBuilder : NSObject

@property (copy, nonatomic) NSString *gearName;
@property (retain, nonatomic) NSNumber *qualityType;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *isH265;
@property (retain, nonatomic) BDSimURLObject *playAddr;
@property (copy, nonatomic) NSString *hdrType;
@property (copy, nonatomic) NSString *hdrBit;
@property (nonatomic) long long videoFPS;
@property (copy, nonatomic) NSString *videoExtra;
@property (retain, nonatomic) NSNumber *videoBitrate;

- (void).cxx_destruct;
- (id)build;

@end
