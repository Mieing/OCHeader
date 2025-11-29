@class NSString;

@interface IESIMCodeGenTextExtraModel : AWEBaseDataModel

@property (nonatomic) int start;
@property (nonatomic) int last;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *searchQueryId;
@property (nonatomic) int searchRank;
@property (nonatomic) int searchHideWords;
@property (copy, nonatomic) NSString *searchExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
