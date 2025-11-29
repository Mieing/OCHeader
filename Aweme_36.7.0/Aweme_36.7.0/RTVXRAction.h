@class NSString;

@interface RTVXRAction : NSObject

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *roomID;

- (id)initWithActionType:(long long)a0 roomID:(id)a1;
- (id)typeMapperForDesignClass;
- (void).cxx_destruct;

@end
