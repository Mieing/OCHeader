@class NSDictionary;

@interface TIMXECOMMessageInserterResponse : NSObject

@property (nonatomic) long long insertNum;
@property (nonatomic) BOOL isAllSuccess;
@property (retain, nonatomic) NSDictionary *countMap;

- (id)initWithInsertNum:(long long)a0 isAllSuccess:(BOOL)a1;
- (id)initWithInsertNum:(long long)a0 isAllSuccess:(BOOL)a1 countMap:(id)a2;
- (void).cxx_destruct;

@end
