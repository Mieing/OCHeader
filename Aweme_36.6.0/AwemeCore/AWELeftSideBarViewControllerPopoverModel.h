@class NSString, DUXPopover;

@interface AWELeftSideBarViewControllerPopoverModel : NSObject

@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) NSString *businessId;

- (void).cxx_destruct;

@end
