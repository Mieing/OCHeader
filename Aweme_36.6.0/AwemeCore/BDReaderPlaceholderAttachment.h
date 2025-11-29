@class NSObject;
@protocol BDReaderInsertViewProtocol;

@interface BDReaderPlaceholderAttachment : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } displaySize;
@property (weak, nonatomic) NSObject<BDReaderInsertViewProtocol> *insertView;
@property (nonatomic) BOOL allowSelection;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) long long alignment;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (double)GetHeight;
- (double)GetAscent;
- (double)GetDescent;
- (double)GetWidth;
- (void).cxx_destruct;
- (id)init;

@end
