@class NSMutableDictionary, NSMutableArray;

@interface AWEFeedBSClientPortraitParser : NSObject

@property (retain, nonatomic) NSMutableDictionary *result;
@property (retain, nonatomic) NSMutableArray *parserList;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)setupParserList;
- (id)parse;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateResult;
- (void)setup;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
