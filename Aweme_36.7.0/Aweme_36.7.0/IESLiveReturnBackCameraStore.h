@class NSArray, NSString, HTSEventContext, NSNumber, HTSLiveRoom;

@interface IESLiveReturnBackCameraStore : NSObject

@property (retain, nonatomic) NSNumber *cameraID;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) NSArray *vsAvatarURLs;
@property (copy, nonatomic) NSString *backCameraTitle;
@property (retain, nonatomic) HTSEventContext *eventContext;

- (void).cxx_destruct;

@end
