@class NSString, UIImage;

@interface IESLiveMultiLinkerAnchorActionItem : NSObject

@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL isDisableClick;

- (void).cxx_destruct;

@end
