@class NSString;

@interface AWEIMContentWithSizeModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;

@end
