@class NSMutableDictionary;

@interface WeSVGTokenHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *tokenDict;

+ (id)shared;
+ (id)tokenNameForOldToken:(id)a0;

- (id)init;
- (void)initData;
- (id)tokenNameForOldToken:(id)a0;
- (void).cxx_destruct;

@end
