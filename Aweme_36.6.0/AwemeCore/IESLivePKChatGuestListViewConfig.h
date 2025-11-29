@class HTSInteractionStreamAppData;
@protocol IESLiveInteractiveExtendUserService, IESLivePKChatGuestListViewDelegate;

@interface IESLivePKChatGuestListViewConfig : NSObject

@property (nonatomic) double itemPortraitSpace;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) id<IESLiveInteractiveExtendUserService> userService;
@property (weak, nonatomic) id<IESLivePKChatGuestListViewDelegate> delegate;
@property (nonatomic) long long role;

- (void).cxx_destruct;

@end
