@class NSString, OrderedDictionary, EmoticonTabRecommendItem;

@interface EmoticonBoardPageWrap : MMObject

@property (nonatomic) int pageType;
@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSString *packageName;
@property (nonatomic) unsigned long long packEmoticonCount;
@property (retain, nonatomic) EmoticonTabRecommendItem *recommendItem;
@property (retain, nonatomic) OrderedDictionary *packedIPDictionary;

- (void).cxx_destruct;

@end
