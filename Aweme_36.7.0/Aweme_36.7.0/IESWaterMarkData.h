@class NSArray, IESMediaTimeRange, IESSticker;

@interface IESWaterMarkData : NSObject {
    IESSticker *_sticker;
}

@property (retain, nonatomic) NSArray *waterMark;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGSize { double width; double height; } targetVideoSize;
@property (nonatomic) long long refreshInterval;
@property (retain, nonatomic) IESMediaTimeRange *showTimeRange;

- (id)convertToSticker;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
