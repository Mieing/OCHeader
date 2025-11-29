@class HTSLiveUser;

@interface IESLiveCommentWidgetInputAtUser : NSObject

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInPlainText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInAttributedText;

- (id)initWithUser:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
