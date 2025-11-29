@class NSString, WCFinderFeedContentVM;

@interface WeChat.WSFlowListFinderFeedInfo : NSObject {
    void /* unknown type, empty encoding */ exportId;
    void /* unknown type, empty encoding */ _feedContentVM;
}

@property (nonatomic, copy) NSString *exportId;
@property (nonatomic, readonly) WCFinderFeedContentVM *feedContentVM;

- (id)init;
- (void).cxx_destruct;

@end
