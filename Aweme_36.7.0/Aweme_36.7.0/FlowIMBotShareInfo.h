@class NSString;

@interface FlowIMBotShareInfo : NSObject {
    void /* function */ shareStatus;
    void /* function */ shareUrl;
    void /* unknown type, empty encoding */ isShowShareTab;
    void /* unknown type, empty encoding */ isShowMessageShare;
    void /* function */ qrCodeUrl;
}

@property (nonatomic, copy) NSString *shareStatus;
@property (nonatomic, copy) NSString *shareUrl;
@property (nonatomic, copy) NSString *qrCodeUrl;

- (void).cxx_destruct;
- (id)init;

@end
