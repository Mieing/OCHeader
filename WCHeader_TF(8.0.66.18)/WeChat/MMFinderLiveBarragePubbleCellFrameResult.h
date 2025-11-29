@class NSMutableArray;

@interface MMFinderLiveBarragePubbleCellFrameResult : NSObject

@property (nonatomic) unsigned long long layoutedStyle;
@property (nonatomic) struct CGSize { double width; double height; } singleCellSize;
@property (nonatomic) struct CGSize { double width; double height; } singleContentSize;
@property (retain, nonatomic) NSMutableArray *singleArrStyles;
@property (nonatomic) double singleFirstLineOriginX;
@property (nonatomic) struct CGSize { double width; double height; } multiCellSize;
@property (nonatomic) struct CGSize { double width; double height; } multiContentSize;
@property (retain, nonatomic) NSMutableArray *multiArrStyles;
@property (nonatomic) double multiFirstLineOriginX;
@property (nonatomic) struct CGSize { double width; double height; } singleCellSizeInBright;
@property (nonatomic) struct CGSize { double width; double height; } singleContentSizeInBright;
@property (retain, nonatomic) NSMutableArray *singleArrStylesInBright;
@property (nonatomic) double singleFirstLineOriginXInBright;
@property (nonatomic) struct CGSize { double width; double height; } multiCellSizeInBright;
@property (nonatomic) struct CGSize { double width; double height; } multiContentSizeInBright;
@property (retain, nonatomic) NSMutableArray *multiArrStylesInBright;
@property (nonatomic) double multiFirstLineOriginXInBright;

- (void).cxx_destruct;

@end
