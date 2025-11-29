@class NSString;

@interface BDPNovelInsertChapterPolicy : NSObject

@property (copy, nonatomic) NSString *position;
@property (nonatomic) long long pageNo;
@property (nonatomic) long long repeatPeriod;
@property (nonatomic) long long startContentIndex;

+ (id)checkIfHasErrorDic:(id)a0;

- (id)checkIfHasError;
- (void).cxx_destruct;

@end
