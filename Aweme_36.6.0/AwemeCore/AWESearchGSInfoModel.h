@class NSArray, NSNumber;

@interface AWESearchGSInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *witdthArray;
@property (retain, nonatomic) NSNumber *leftMargin;
@property (retain, nonatomic) NSNumber *rightMargin;
@property (retain, nonatomic) NSNumber *topMargin;
@property (retain, nonatomic) NSNumber *bottomMargin;
@property (nonatomic) BOOL activityCardBottom;
@property (nonatomic) BOOL hideShadow;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
