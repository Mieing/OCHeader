@class IESLiveInteractionLayout;
@protocol IESLiveInteractionLayoutCanvasElement;

@interface IESLiveBigPartyGuestInfoViewConfig : NSObject

@property (nonatomic) BOOL isPreview;
@property (weak, nonatomic) id<IESLiveInteractionLayoutCanvasElement> element;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (nonatomic) BOOL isAnchor;

- (void).cxx_destruct;

@end
