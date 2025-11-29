@class NSData, FinderLiveGameData_ThreeDimensionalEntrance;

@interface FinderLiveGameData : WXPBGeneratedMessage

@property (nonatomic) unsigned int visibility;
@property (retain, nonatomic) NSData *gameData;
@property (nonatomic) unsigned int gameFramesetVisibility;
@property (nonatomic) BOOL updated;
@property (retain, nonatomic) FinderLiveGameData_ThreeDimensionalEntrance *entranceInfo;
@property (nonatomic) BOOL liveInThreeDimensionalDirecting;
@property (nonatomic) BOOL selfIsThreeDimensionalDirector;

+ (void)initialize;

@end
