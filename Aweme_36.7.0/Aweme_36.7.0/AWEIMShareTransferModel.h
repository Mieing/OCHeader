@class AWEShareContext, NSString, NSArray, UIViewController;

@interface AWEIMShareTransferModel : NSObject

@property (weak, nonatomic) UIViewController *targetVC;
@property (nonatomic) unsigned long long landscapeStyle;
@property (nonatomic) unsigned long long titleAlign;
@property (retain, nonatomic) AWEShareContext *context;
@property (nonatomic) BOOL authorShareNotPublicAweme;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *pageEnterFrom;
@property (copy, nonatomic) NSString *multiSelectedItems;
@property (copy, nonatomic) NSString *replayContent;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL insertStickOnTopChats;
@property (copy, nonatomic) id /* block */ willDisappearHandler;
@property (copy, nonatomic) id /* block */ didDisappearHandler;
@property (copy, nonatomic) id /* block */ publishStoryBlock;
@property (copy, nonatomic) id /* block */ goNextBlock;
@property (copy, nonatomic) id /* block */ publishNormalBlock;
@property (copy, nonatomic) NSArray *bottomButtons;
@property (nonatomic) BOOL shieldInnerPush;

- (void).cxx_destruct;

@end
