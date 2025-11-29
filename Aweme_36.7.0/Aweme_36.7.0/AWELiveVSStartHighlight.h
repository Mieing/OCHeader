@class NSString;

@interface AWELiveVSStartHighlight : AWEBaseApiModel

@property (nonatomic) BOOL standard;
@property (copy, nonatomic) NSString *descriptionInfo;
@property (nonatomic) long long location;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
