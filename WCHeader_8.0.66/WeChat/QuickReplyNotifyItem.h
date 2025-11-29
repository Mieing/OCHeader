@class NSString, CContact, UIImage, CMessageWrap;

@interface QuickReplyNotifyItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL hideDetailContent;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) UIImage *customIconImage;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) CMessageWrap *message;
@property (retain, nonatomic) NSString *reportMsgId;
@property (retain, nonatomic) NSString *reportMsgType;

- (id)initWithUsername:(id)a0 message:(id)a1;
- (id)initWithUsername:(id)a0 messages:(id)a1;
- (BOOL)isSupportedMessage:(id)a0;
- (id)voiceOver;
- (void).cxx_destruct;

@end
