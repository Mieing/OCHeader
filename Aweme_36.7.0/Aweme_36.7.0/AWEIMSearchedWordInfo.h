@class NSString;

@interface AWEIMSearchedWordInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *searchedWord;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
