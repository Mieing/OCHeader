@class NSString, NSMutableArray;

@interface TextStateCacheEntry : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSMutableArray *privateTextStateList;

- (id)initWithUsername:(id)a0;
- (void)addTextState:(id)a0 checkExist:(BOOL)a1;
- (void)addTextState:(id)a0;
- (void)removeTextStateForId:(id)a0;
- (long long)indexOfTextStateForId:(id)a0;
- (id)textStateList;
- (id)mostRecentTextState;
- (void).cxx_destruct;

@end
