@class NSString, NSMutableArray, NSMutableDictionary;

@interface Sentence : NSObject <NSCopying>

@property (nonatomic) long long since;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSMutableArray *charactersArray;
@property (retain, nonatomic) NSMutableArray *segmentsArray;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableDictionary *textWidthDic;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
