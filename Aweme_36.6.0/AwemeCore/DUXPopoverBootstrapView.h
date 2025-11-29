@class NSString, UIColor, UIFont;

@interface DUXPopoverBootstrapView : NSObject <DUXPopoverContent>

@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *linkText;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *linkColor;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIFont *linkFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
