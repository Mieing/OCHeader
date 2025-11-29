@class HTSEventContext, NSDictionary, HTSLiveImage, IESLiveComponentContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveVSGiftPanelDataSharing : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) long long style;
@property (nonatomic) BOOL isVerticalStream;
@property (retain, nonatomic) HTSLiveImage *selectImage;
@property (copy, nonatomic) NSString *giftListLogID;

- (void).cxx_destruct;

@end
