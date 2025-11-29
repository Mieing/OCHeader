@class NSNumber;

@interface AWELinkDiggModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *diggCount;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) BOOL userBuried;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
