@class NSString;

@interface IESLiveInteractReplacePanelGuestSlotsModel : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } frameXY;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isEnlarge;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL isAudio;
@property (nonatomic) long long posIndex;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;

@end
