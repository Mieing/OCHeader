@class NSString, UIImage, BDPGameGrowthCenterInfo;

@interface BDPGameGrowthCenterEntranceInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *mpSchema;
@property (copy, nonatomic) NSString *lynxSchema;
@property (readonly, copy, nonatomic) NSString *iconURL;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) BDPGameGrowthCenterInfo *centerInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
