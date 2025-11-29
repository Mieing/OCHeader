@class NSDictionary, NSString, UIView;
@protocol IESLiveOnePipBizDecorationViewProtocol;

@interface IESLiveOnePipPreferenceOptionsModel : NSObject

@property (nonatomic) double preferWidth;
@property (nonatomic) double ratio;
@property (nonatomic) double horizontalMaxHeight;
@property (nonatomic) double marginBottom;
@property (nonatomic) unsigned long long closeBtnRectCorner;
@property (nonatomic) unsigned long long muteBtnRectCorner;
@property (weak, nonatomic) UIView<IESLiveOnePipBizDecorationViewProtocol> *bizDecorationView;
@property (retain, nonatomic) NSDictionary *bizTrackParams;
@property (nonatomic) struct CGSize { double width; double height; } fixedSize;
@property (nonatomic) struct CGPoint { double x; double y; } startPos;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeArea;
@property (nonatomic) BOOL retainPlayerSize;
@property (nonatomic) BOOL enableAttachScreen;
@property (nonatomic) BOOL enableHideToScreenOut;
@property (copy, nonatomic) NSString *fromRoomId;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
