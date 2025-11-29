@class AWEHangoutSearchBarModel;

@interface AWEHangoutHeaderModel : AWEBaseApiModel

@property (retain, nonatomic) AWEHangoutSearchBarModel *searchBar;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithJsonObj:(id)a0;
- (void)assignPropWithJsonObj:(id)a0;
- (void).cxx_destruct;

@end
