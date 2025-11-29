@class NSArray, TIMXSDKInstance;

@interface TIMXMessagePullerContext : NSObject {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (copy, nonatomic) NSArray *allInitHandlerClasses;
@property (copy, nonatomic) NSArray *allMessageHandlersClasses;

- (void).cxx_destruct;

@end
