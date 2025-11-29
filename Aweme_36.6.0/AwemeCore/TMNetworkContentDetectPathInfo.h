@class NSArray, NSMutableArray;

@interface TMNetworkContentDetectPathInfo : NSObject

@property (retain, nonatomic) NSMutableArray *innerItems;
@property (nonatomic) BOOL isSubString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } subStringRange;
@property (readonly, nonatomic) NSArray *items;

- (id)pathStringWithKeyFormat:(id)a0 indexFormat:(id)a1;
- (void)addPathItemWithIndex:(unsigned long long)a0;
- (void)addPathItemWithWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeLastItem;

@end
