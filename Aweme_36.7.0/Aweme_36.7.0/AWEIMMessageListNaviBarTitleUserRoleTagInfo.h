@class NSString, UIColor, UIImage;

@interface AWEIMMessageListNaviBarTitleUserRoleTagInfo : NSObject <AWEIMMessageListNaviBarTitleUserRoleTagInfoProtocol>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(unsigned long long)a0 text:(id)a1 textColor:(id)a2 backgroundColor:(id)a3;
- (id)initWithType:(unsigned long long)a0 icon:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
