@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveFaceEffectVMContext : NSObject <IESLiveFaceEffectContext>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL hasSearchTab;
@property (nonatomic) BOOL hasFavorTab;
@property (nonatomic) BOOL hasHotTab;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
