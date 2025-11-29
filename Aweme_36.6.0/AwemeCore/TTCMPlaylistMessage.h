@interface TTCMPlaylistMessage : NSObject

@property (nonatomic) long long what;
@property (nonatomic) long long mArg1;
@property (nonatomic) long long mArg2;
@property (copy, nonatomic) id mObject;

- (id)initWithWhat:(int)a0;
- (id)initWithWhat:(int)a0 arg1:(long long)a1;
- (id)initWithWhat:(int)a0 arg1:(long long)a1 arg2:(long long)a2;
- (id)initWithWhat:(int)a0 arg1:(long long)a1 Object:(id)a2;
- (id)initWithWhat:(int)a0 arg1:(long long)a1 arg2:(long long)a2 Object:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
