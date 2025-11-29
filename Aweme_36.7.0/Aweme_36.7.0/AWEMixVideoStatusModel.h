@class NSString;

@interface AWEMixVideoStatusModel : AWEBaseApiModel

@property (nonatomic) long long status;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isViewed;
@property (nonatomic) BOOL isLocatedCell;
@property (nonatomic) BOOL currentPlayTip;
@property (copy, nonatomic) NSString *preCompilationId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
