@class NSString, NSArray, NSDictionary, NSNumber;

@interface IESLiveFastMatchPathNode : NSObject

@property (retain, nonatomic) NSNumber *roomId;
@property (nonatomic) BOOL didApply;
@property (retain, nonatomic) NSString *requestPage;
@property (retain, nonatomic) NSNumber *mute;
@property (nonatomic) BOOL isFromOutside;
@property (retain, nonatomic) NSArray *orderSongList;
@property (nonatomic) BOOL isLiveEnd;
@property (nonatomic) BOOL fastMatchTriggered;
@property (nonatomic) BOOL applyByFastMatchInRoom;
@property (copy, nonatomic) NSDictionary *resultTagTrackInfo;

- (void).cxx_destruct;

@end
