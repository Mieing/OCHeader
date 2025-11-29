@class NSMutableDictionary;

@interface GCChatBaseCellLayoutInfo : NSObject

@property (nonatomic) struct CGSize { double width; double height; } nameSize;
@property (nonatomic) struct CGSize { double width; double height; } tagSize;
@property (nonatomic) double roleWidthWithLeftSpace;
@property (nonatomic) struct CGSize { double width; double height; } roleSize;
@property (nonatomic) struct CGSize { double width; double height; } roleLabelSize;
@property (nonatomic) double compressedNameWidth;
@property (nonatomic) double maxNameLineWidth;
@property (nonatomic) struct CGSize { double width; double height; } bgSize;
@property (retain, nonatomic) NSMutableDictionary *contentInfoDict;
@property (nonatomic) struct CGSize { double width; double height; } innerContentSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } innerContentInset;
@property (nonatomic) struct CGPoint { double x; double y; } nameLineLabelOffset;

- (id)init;
- (void).cxx_destruct;

@end
