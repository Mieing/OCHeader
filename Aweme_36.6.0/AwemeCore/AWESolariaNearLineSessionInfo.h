@class NSString, AWESolariaNearLineSessionItem, NSDictionary, NSMutableArray;

@interface AWESolariaNearLineSessionInfo : NSObject

@property (retain, nonatomic) NSMutableArray *preList;
@property (retain, nonatomic) AWESolariaNearLineSessionItem *current;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSDictionary *infoMap;

+ (id)modelCustomPropertyMapper;

- (id)initWithSessionId:(id)a0 infoMap:(id)a1;
- (void).cxx_destruct;

@end
