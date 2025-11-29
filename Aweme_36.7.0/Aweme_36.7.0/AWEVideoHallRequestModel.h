@class NSString;

@interface AWEVideoHallRequestModel : NSObject

@property (copy, nonatomic) NSString *entityId;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long offset;

- (id)initWithEntityId:(id)a0 type:(long long)a1 offset:(unsigned long long)a2;
- (void).cxx_destruct;

@end
