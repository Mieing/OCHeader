@class NSString, NSMutableArray;

@interface SearchTextItem : NSObject

@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSMutableArray *arrKeywordItem;
@property (nonatomic) BOOL bSpaceSeperated;

- (id)init;
- (BOOL)isMultiKeyword;
- (void).cxx_destruct;

@end
