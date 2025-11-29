@class NSString, UIFont;

@interface AWENewsAISmartHeaderViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double titleLeftMargin;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void).cxx_destruct;

@end
