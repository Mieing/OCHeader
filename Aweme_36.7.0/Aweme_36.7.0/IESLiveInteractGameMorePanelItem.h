@class NSString, UIImage, NSURL;

@interface IESLiveInteractGameMorePanelItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
