@class NSString, NSMutableDictionary;

@interface IESLivePersonalizedEmoticonModel : NSObject <NSCoding>

@property (retain, nonatomic) NSString *emoticonTitle;
@property (nonatomic) double latestUseTimestamp;
@property (retain, nonatomic) NSMutableDictionary *latestUseCount;
@property (nonatomic) long long latestAllUseCount;
@property (nonatomic) long long allUserScore;
@property (nonatomic) double finalScore;
@property (copy, nonatomic) NSString *emoticonID;
@property (copy, nonatomic) NSString *emoticonGroupID;

- (id)initWithEmoticonTitle:(id)a0;
- (void)emoticonModelDidClicked;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
