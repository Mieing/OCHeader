@class NSArray, NSString;

@interface TRKLyricSentence : NSObject

@property (nonatomic) long long since;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSArray *characters;
@property (retain, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *text;

- (id)initWithSentence:(id)a0;
- (void).cxx_destruct;

@end
