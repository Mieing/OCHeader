@class UIColor, NSString, NSDictionary, UIImage;

@interface AWEIMTextTemplateModel : NSObject

@property (nonatomic) long long action;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *extraLinkType;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) id /* block */ didClickLink;
@property (readonly, copy, nonatomic) NSString *warningType;
@property (readonly, copy, nonatomic) NSString *scene;
@property (readonly, copy, nonatomic) NSString *secSenderUid;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) UIImage *attachment;
@property (nonatomic) struct CGSize { double width; double height; } attachmentSize;
@property (nonatomic) long long yyVerticalAlignment;
@property (copy, nonatomic) NSString *imgURI;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUID;
@property (nonatomic) double createTime;
@property (nonatomic) long long serverMessageID;
@property (nonatomic) double lastClickTime;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *textBGColor;
@property (retain, nonatomic) NSDictionary *trackDict;
@property (copy, nonatomic) NSString *originalKey;

- (id)initWithAction:(long long)a0 name:(id)a1 link:(id)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
