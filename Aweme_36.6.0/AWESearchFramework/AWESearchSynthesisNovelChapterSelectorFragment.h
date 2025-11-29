@class NSString, NSArray;

@interface AWESearchSynthesisNovelChapterSelectorFragment : NSObject <NSCoding>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long from;
@property (nonatomic) long long to;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *chapterList;

- (id)initWithUrl:(id)a0 title:(id)a1 from:(long long)a2 to:(long long)a3;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
