@class NSArray;

@interface AWEMVDynamicInsertModel : NSObject

@property (nonatomic) unsigned long long priority;
@property (nonatomic) unsigned long long insertPosition;
@property (nonatomic) unsigned long long enableInsertScene;
@property (retain, nonatomic) NSArray *modelList;
@property (copy, nonatomic) id /* block */ checkBlock;
@property (copy, nonatomic) id /* block */ indexPathBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) struct AWEMVDynamicInsertOption { BOOL animated; BOOL needScroll; BOOL ignoreInsertTimesAvoidance; BOOL prefetchCover; } insertOption;

- (id)initWithPriority:(unsigned long long)a0 insertPosition:(unsigned long long)a1 enableInsertScene:(unsigned long long)a2 modelList:(id)a3 checkBlock:(id /* block */)a4 indexPathBlock:(id /* block */)a5 completionBlock:(id /* block */)a6 insertOption:(struct AWEMVDynamicInsertOption { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a7;
- (void).cxx_destruct;

@end
