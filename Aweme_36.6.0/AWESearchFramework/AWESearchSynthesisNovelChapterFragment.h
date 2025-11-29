@class NSString;

@interface AWESearchSynthesisNovelChapterFragment : NSObject <NSCoding>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long number;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *chapterContent;
@property (nonatomic) long long index;

- (id)initWithUrl:(id)a0 withName:(id)a1 withNumber:(long long)a2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
