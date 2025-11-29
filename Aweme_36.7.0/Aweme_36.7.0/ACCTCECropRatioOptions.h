@class NSArray, ACCTCECropRatioOption;

@interface ACCTCECropRatioOptions : NSObject

@property (nonatomic) double originalRatio;
@property (nonatomic) double fillRatio;
@property (retain, nonatomic) NSArray *cropRatioOptionDatas;
@property (retain, nonatomic) NSArray *disableCropRatioOptionDatas;
@property (retain, nonatomic) ACCTCECropRatioOption *selectedRatioOption;
@property (readonly, copy, nonatomic) NSArray *data;

- (id)freeOption;
- (id)optionWithRatioType:(long long)a0;
- (id)originalRatioValue;
- (id)fillRatioValue;
- (id)initWithOriginalRatio:(double)a0 fillRatio:(double)a1 cropRatioOptionDatas:(id)a2 disableCropRatioOptionDatas:(id)a3;
- (id)reciprocalOption;
- (long long)currentIndex;
- (void).cxx_destruct;
- (id)inputData;

@end
