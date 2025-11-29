@class NSString, NSDictionary;

@interface BDPNovelGeneralInsertStrategy : NSObject

@property (copy, nonatomic) NSString *position;
@property (nonatomic) long long repeatCount;
@property (nonatomic) long long repeatChapter;
@property (nonatomic) long long offset;
@property (nonatomic) long long startContentIndex;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)checkIfHasErrorDic:(id)a0;

- (id)checkIfHasError;
- (void).cxx_destruct;

@end
