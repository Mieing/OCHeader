@class NSNumber;

@interface AWESearchGSInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *leftMargin;
@property (retain, nonatomic) NSNumber *rightMargin;
@property (retain, nonatomic) NSNumber *topMargin;
@property (retain, nonatomic) NSNumber *bottomMargin;
@property (nonatomic) BOOL activityCardBottom;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
