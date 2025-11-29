@class NSString, UIColor, NSDictionary;

@interface AWEIMTextActionBaseModel : NSObject

@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) long long originTextLength;
@property (nonatomic) long long textLength;
@property (nonatomic) long long originIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSDictionary *extInfo;

- (id)initWithActionInfo:(id)a0;
- (void).cxx_destruct;

@end
