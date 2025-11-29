@class NSDictionary;

@interface AWELiveAudienceAccessServiceCoreConfig : NSObject

@property (nonatomic) BOOL enableReuse;
@property (nonatomic) BOOL enableExistChangeRoom;
@property (nonatomic) BOOL allowEnterSameRoomID;
@property (nonatomic) BOOL enableLeaveSameRoom;
@property (retain, nonatomic) NSDictionary *exitRoomStyle;
@property (retain, nonatomic) NSDictionary *clickLiveClose;
@property (retain, nonatomic) NSDictionary *clickFinishClose;
@property (retain, nonatomic) NSDictionary *disableRoomDelete;
@property (retain, nonatomic) NSDictionary *reportDislikeExitStyle;

- (void).cxx_destruct;

@end
