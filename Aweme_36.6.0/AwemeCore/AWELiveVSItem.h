@class AWELiveVSItemBar;

@interface AWELiveVSItem : AWEBaseApiModel

@property (retain, nonatomic) AWELiveVSItemBar *vsCommentItem;
@property (retain, nonatomic) AWELiveVSItemBar *vsBarItem;

+ (id)vsCommentItemJSONTransformer;
+ (id)vsBarItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
