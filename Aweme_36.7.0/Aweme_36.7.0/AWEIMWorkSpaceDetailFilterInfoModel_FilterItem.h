@class NSString;

@interface AWEIMWorkSpaceDetailFilterInfoModel_FilterItem : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int value;
@property (copy, nonatomic) NSString *eventTracking;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
