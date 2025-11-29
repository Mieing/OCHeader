@class NSDictionary, NSString;

@interface ACCTCECropRatioOption : NSObject

@property (copy, nonatomic) NSDictionary *ratioTrackNameDic;
@property (nonatomic) double ratioValue;
@property (nonatomic) long long ratioType;
@property (nonatomic) struct CGSize { double width; double height; } minimumCropSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *ratioTrackName;
@property (nonatomic) BOOL enable;

- (id)initWithRatioType:(long long)a0 ratioValue:(double)a1;
- (void).cxx_destruct;
- (id)description;

@end
