@class NSString, NSMutableArray, NSDictionary;

@interface WSContactSearchResult : NSObject

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSMutableArray *arrResult;
@property (retain, nonatomic) NSDictionary *dicSearchMatchTip;
@property (retain, nonatomic) NSString *sugTitle;
@property (nonatomic) unsigned int sugType;

- (id)toJSON;
- (id)markHighlightString:(id)a0 arrKeywords:(id)a1;
- (void).cxx_destruct;

@end
