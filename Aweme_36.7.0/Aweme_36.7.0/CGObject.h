@protocol CGCloudPlayer, CGItem;

@interface CGObject : NSObject

@property (weak, nonatomic) id<CGItem> item;
@property (weak, nonatomic) id<CGCloudPlayer> cloudPlayer;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void).cxx_destruct;

@end
