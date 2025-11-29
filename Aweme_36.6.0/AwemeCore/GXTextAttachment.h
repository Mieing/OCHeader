@class NSString, UIView;

@interface GXTextAttachment : NSObject

@property (retain, nonatomic) UIView *view;
@property (nonatomic) long long type;
@property (nonatomic) long long start;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *align;
@property (nonatomic) double offset;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (void).cxx_destruct;

@end
