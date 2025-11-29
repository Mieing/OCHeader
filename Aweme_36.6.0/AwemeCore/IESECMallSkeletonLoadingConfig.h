@interface IESECMallSkeletonLoadingConfig : NSObject

@property (nonatomic) long long columns;
@property (nonatomic) double itemGap;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemRadius;

+ (id)configWithColumns:(long long)a0 itemGap:(double)a1 itemHeight:(double)a2 itemRadius:(double)a3;

@end
