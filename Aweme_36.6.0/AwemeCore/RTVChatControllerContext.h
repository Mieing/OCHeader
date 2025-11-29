@class NSDictionary;

@interface RTVChatControllerContext : NSObject

@property (readonly, copy, nonatomic) NSDictionary *extraMonitorInfo;
@property (nonatomic) BOOL forIM;

- (void)updateExtraMonitorInfo:(id)a0;
- (void).cxx_destruct;

@end
