@class NSString, NSDictionary;

@interface SECYcavDataResult : NSObject

@property (nonatomic) double confidence;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSString *relatedKeyPath;
@property (retain, nonatomic) id originValue;
@property (copy, nonatomic) NSDictionary *relatedData;
@property (copy, nonatomic) NSString *comment;

- (id)relatedKeyPathSets;
- (void).cxx_destruct;

@end
