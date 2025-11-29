@class NSString, IESECLiveRoomContext, IESECLiveContext;
@protocol IESECLiveUserRecordActionInterface;

@interface IESECLiveUserActParamsProvider : NSObject <IESECLiveUserParamsProvider>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) id<IESECLiveUserRecordActionInterface> actRecordManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clickProductIDArray;
- (id)showProductIDArray;
- (id)userActParamsProviderWithCount:(id)a0;
- (id)curGuideProductID;
- (void).cxx_destruct;
- (id)initWithRoomContext:(id)a0;

@end
