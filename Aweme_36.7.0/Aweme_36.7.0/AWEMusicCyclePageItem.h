@class NSString;
@protocol AWEMusicCycleViewItemProtocol;

@interface AWEMusicCyclePageItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) id<AWEMusicCycleViewItemProtocol> item;
@property (retain, nonatomic) id model;
@property (copy, nonatomic) NSString *identifier;

- (void)attachModel;
- (void).cxx_destruct;
- (void)reset;

@end
