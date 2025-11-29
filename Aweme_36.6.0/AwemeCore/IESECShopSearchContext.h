@class IESECShopContext, NSString, NSNumber, IESECShopSearchEnterParams;

@interface IESECShopSearchContext : NSObject

@property (retain, nonatomic) NSNumber *shopVersion;
@property (retain, nonatomic) IESECShopSearchEnterParams *enterParams;
@property (retain, nonatomic) IESECShopContext *shopContext;
@property (nonatomic) unsigned long long recentSearchType;
@property (retain, nonatomic) NSString *inboundSearchKeyword;
@property (retain, nonatomic) NSString *inboundSearchPlaceholder;
@property (retain, nonatomic) NSString *sourceBtmToken;
@property (retain, nonatomic) NSString *hotSearchMethod;
@property (retain, nonatomic) NSString *hotSearchIconType;
@property (nonatomic) BOOL isSearchButtonTapped;
@property (nonatomic) BOOL openBySearch;
@property (nonatomic) BOOL isInboundSearchKeywordFromFE;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
