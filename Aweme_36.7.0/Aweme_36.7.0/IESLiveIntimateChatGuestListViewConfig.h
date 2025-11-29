@class HTSInteractionStreamAppData, IESLiveMultiInteractUserService;
@protocol IESLiveIntimateChatGuestListViewDelegate;

@interface IESLiveIntimateChatGuestListViewConfig : NSObject

@property (nonatomic) double itemPortraitSpace;
@property (nonatomic) double itemSideLength;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveMultiInteractUserService *userService;
@property (weak, nonatomic) id<IESLiveIntimateChatGuestListViewDelegate> delegate;

- (void).cxx_destruct;

@end
