@class NSString, NSNumber, AWEURLModel;

@interface AWEAnchorMediumModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *mediumID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) AWEURLModel *coverURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)typeTitle;

@end
