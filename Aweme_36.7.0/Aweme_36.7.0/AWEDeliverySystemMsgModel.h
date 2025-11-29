@class YYTextLayout, NSString;

@interface AWEDeliverySystemMsgModel : AWEDeliveryBaseMsgModel

@property (retain, nonatomic) YYTextLayout *textLayout;
@property (copy, nonatomic) NSString *tipContent;
@property (nonatomic) BOOL isUnKnownMessageBodyType;
@property (nonatomic) BOOL showBubbleBg;

+ (Class)cellClass;

- (id)initWithMessage:(id)a0 unknownMessageBodyType:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
