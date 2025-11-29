@class NSDictionary, RTVStateEvent;

@interface RTVStateTransferContext : NSObject

@property (readonly, nonatomic) RTVStateEvent *event;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;

@end
