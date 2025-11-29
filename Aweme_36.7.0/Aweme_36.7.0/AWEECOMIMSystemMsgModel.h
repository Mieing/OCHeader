@class YYTextLayout, NSString;

@interface AWEECOMIMSystemMsgModel : AWEECOMIMBaseMsgModel

@property (retain, nonatomic) YYTextLayout *textLayout;
@property (copy, nonatomic) NSString *tipContent;
@property (nonatomic) BOOL isUnKnownMessageBodyType;
@property (nonatomic) struct CGSize { double width; double height; } textLayoutSize;
@property (nonatomic) BOOL isSoftDelete;
@property (nonatomic) BOOL showBubbleBg;

+ (Class)cellClass;

- (id)initWithMessage:(id)a0 unknownMessageBodyType:(BOOL)a1;
- (id)initWithMessage:(id)a0 unknownMessageBodyType:(BOOL)a1 isSoftDelete:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
