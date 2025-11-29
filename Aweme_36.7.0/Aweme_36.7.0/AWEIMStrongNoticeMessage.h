@class NSString, NSArray, AWEIMLinkTextUtility;
@protocol IESIMMessageProtocol, IESIMStrangerMessageProtocol;

@interface AWEIMStrongNoticeMessage : AWEIMMessage

@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *fallbackTips;
@property (retain, nonatomic) NSArray *templateArray;
@property (retain, nonatomic) AWEIMLinkTextUtility *textUtility;
@property (nonatomic) BOOL hasSafeLink;
@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) NSArray *linkArray;
@property (weak, nonatomic) id<IESIMStrangerMessageProtocol> attachStrangerMsg;
@property (weak, nonatomic) id<IESIMMessageProtocol> attachMsg;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)calculateAttributedContent;
- (id)initWithTips:(id)a0 templateArray:(id)a1;
- (void)prepareForConversationHint;
- (void).cxx_destruct;

@end
