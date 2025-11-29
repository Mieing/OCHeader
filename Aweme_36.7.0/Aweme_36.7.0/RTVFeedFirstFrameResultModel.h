@interface RTVFeedFirstFrameResultModel : NSObject

@property (readonly, nonatomic) long long awemeType;
@property (readonly, nonatomic) long long result;

+ (id)modelWithResult:(long long)a0;

- (id)initWithAwemeType:(long long)a0 result:(long long)a1;
- (BOOL)isSuccess;

@end
