@class NSString, NSArray;

@interface IESMMEnigmaDetectResultData : IESMMAlgorithmResultData

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *points;
@property (nonatomic) double zoomSuggest;

- (void).cxx_destruct;
- (id)init;

@end
