@class NSArray, TTEpubChapter;

@interface TTEpubLayoutResult : NSObject

@property (retain, nonatomic) NSArray *page_list;
@property (retain, nonatomic) NSArray *paragraph_list;
@property (retain, nonatomic) TTEpubChapter *chapter;

- (void).cxx_destruct;
- (id)string;

@end
