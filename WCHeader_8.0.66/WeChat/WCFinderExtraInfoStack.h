@class NSString, NSDictionary, NSMutableArray;

@interface WCFinderExtraInfoStack : NSObject

@property (retain, nonatomic) NSString *jsonValue;
@property (retain, nonatomic) NSDictionary *dictValue;
@property (retain, nonatomic) NSMutableArray *appendedInfos;

- (void)flush;
- (id)mapInfoDict;
- (id)insertExtraInfo:(id)a0;
- (void)iterAllTokens:(id /* block */)a0;
- (void).cxx_destruct;

@end
