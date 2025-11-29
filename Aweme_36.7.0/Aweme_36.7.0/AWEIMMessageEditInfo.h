@interface AWEIMMessageEditInfo : NSObject

@property (readonly, nonatomic) BOOL isEdited;
@property (readonly, nonatomic) long long editUid;
@property (readonly, nonatomic) long long editTime;
@property (nonatomic) long long editCount;

- (id)initWithIESMessage:(id)a0;
- (id)getDict;
- (id)initWithDict:(id)a0;

@end
