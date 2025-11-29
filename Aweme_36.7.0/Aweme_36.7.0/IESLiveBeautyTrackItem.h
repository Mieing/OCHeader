@class IESLiveRoomBeautyItem;

@interface IESLiveBeautyTrackItem : NSObject

@property (nonatomic) BOOL isTakeDefault;
@property (nonatomic) double startTime;
@property (retain, nonatomic) IESLiveRoomBeautyItem *item;
@property (nonatomic) unsigned long long beautyType;

- (void).cxx_destruct;

@end
