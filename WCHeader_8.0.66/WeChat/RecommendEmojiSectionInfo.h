@class NSString, NSMutableArray;

@interface RecommendEmojiSectionInfo : NSObject

@property (nonatomic) unsigned long long sectionType;
@property (nonatomic) long long numOfItems;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *emoticonWraps;
@property (nonatomic) BOOL isLocal;

- (void).cxx_destruct;

@end
