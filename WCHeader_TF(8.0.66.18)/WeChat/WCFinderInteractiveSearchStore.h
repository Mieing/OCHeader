@class NSString, NSData, WCFinderCustomCGI, NSMutableArray;

@interface WCFinderInteractiveSearchStore : NSObject

@property (retain, nonatomic) NSString *lastKeyword;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) WCFinderCustomCGI *lastCGI;
@property (nonatomic) int tabType;
@property (nonatomic) int subTabType;
@property (nonatomic) int selectTabType;

- (id)initWithTabType:(int)a0 subTabType:(int)a1 selectTabType:(int)a2;
- (void)dealloc;
- (id)init;
- (void)search:(id)a0 commentScene:(int)a1 complete:(id /* block */)a2;
- (void)search:(id)a0 firstPage:(BOOL)a1 commentScene:(int)a2 complete:(id /* block */)a3;
- (void)requestNextPage:(id /* block */)a0 commentScene:(int)a1;
- (void).cxx_destruct;

@end
