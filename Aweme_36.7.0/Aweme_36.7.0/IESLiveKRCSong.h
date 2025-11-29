@class NSString, NSArray;

@interface IESLiveKRCSong : NSObject

@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSString *songAuthor;
@property (nonatomic) double totalTime;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *lyricist;
@property (copy, nonatomic) NSString *mu;
@property (copy, nonatomic) NSString *ma;
@property (copy, nonatomic) NSString *pu;
@property (copy, nonatomic) NSString *by;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *lyricWholeString;
@property (copy, nonatomic) NSArray *sentenceStrings;
@property (retain, nonatomic) NSArray *sentences;

- (void).cxx_destruct;
- (id)copyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
