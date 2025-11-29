@class NSString, UIImage, UIColor;

@interface DUXPopoverImageView : NSObject <DUXPopoverContent>

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) BOOL showIcon;
@property (nonatomic) BOOL disableShowDivider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
