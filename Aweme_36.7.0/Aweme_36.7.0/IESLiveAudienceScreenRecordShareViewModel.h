@class IESLiveAudienceScreenRecordShareView, HTSEventContext, NSArray, UIImage, NSString;
@protocol IESLiveRoomService;

@interface IESLiveAudienceScreenRecordShareViewModel : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) IESLiveAudienceScreenRecordShareView *view;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *mp4URL;
@property (copy, nonatomic) NSString *highlightId;

- (id)initWithDIContext:(id)a0;
- (void)setupItems;
- (void)publishVideo;
- (void)trackItemClick;
- (void).cxx_destruct;

@end
