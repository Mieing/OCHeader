@class NSString;

@interface AFDRadarShareAwemeModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *shareId;
@property (retain, nonatomic) NSString *objId;
@property (nonatomic) unsigned long long status;
@property (nonatomic) long long shareTimestamp;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
