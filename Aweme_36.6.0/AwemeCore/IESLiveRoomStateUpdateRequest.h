@class NSString;

@interface IESLiveRoomStateUpdateRequest : NSObject <NSCopying>

@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) long long intent;
@property (readonly, copy, nonatomic) NSString *source;

+ (id)requestWithEvent:(long long)a0 intent:(long long)a1 source:(id)a2;

- (id)initWithEvent:(long long)a0 intent:(long long)a1 source:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
