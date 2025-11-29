@class IESSoloKTVMidiItemModel, NSMutableArray;

@interface IESSoloKTVMidiViewDataModel : NSObject

@property (retain, nonatomic) IESSoloKTVMidiItemModel *item;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) NSMutableArray *pitchFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrames;

- (void)cleanUserRecord;
- (void).cxx_destruct;
- (id)init;

@end
