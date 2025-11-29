@class NSString;

@interface RTVCall : NSObject

@property (readonly, copy, nonatomic) NSString *callID;
@property (readonly, nonatomic) unsigned long long callState;

- (id)initWithID:(id)a0 state:(unsigned long long)a1;
- (void).cxx_destruct;

@end
