@class AWEAwemeModel;

@interface AFDNonVideoInsertInfo : NSObject

@property (readonly, nonatomic) long long insertPosition;
@property (readonly, nonatomic) AWEAwemeModel *awemeModel;

- (id)initWithPosition:(long long)a0 awemeModel:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
