@interface IESECLiveAnchorAirViewConfig : NSObject

@property (nonatomic) double topSpace;
@property (nonatomic) double arrowSpace;
@property (nonatomic) double textMargin;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double width; double height; } arrowSize;

- (id)init;

@end
