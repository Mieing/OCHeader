@class NSString;

@interface FlowLinkSDK.FlowLinkStateChangeReason : NSObject {
    void /* unknown type, empty encoding */ code;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ msg;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
