@class NSString;

@interface WeChat.MagicFinderCardInfo : NSObject {
    void /* unknown type, empty encoding */ cardStyle;
    void /* unknown type, empty encoding */ jumpId;
    void /* unknown type, empty encoding */ feedbackReason;
}

@property (nonatomic, copy) NSString *cardStyle;
@property (nonatomic, copy) NSString *jumpId;
@property (nonatomic, copy) NSString *feedbackReason;

- (id)initWithCardStyle:(id)a0 jumpId:(id)a1 feedbackReason:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
