@class TBMapCommonCounter, NSMutableDictionary;

@interface QAuthenStateError : NSObject

@property (retain, nonatomic) TBMapCommonCounter *retryCounter;
@property (retain, nonatomic) NSMutableDictionary *errorInfo;

- (id)init;
- (id)toDictionary;
- (void).cxx_destruct;

@end
