@class NSDictionary, NSArray;
@protocol IESLiveInteractDynamicFirstScreenServiceDelegate;

@interface IESLiveInteractDynamicFirstScreenService : NSObject

@property (copy, nonatomic) NSDictionary *simpleRoomInfo;
@property (copy, nonatomic) NSArray *guestListInfo;
@property (copy, nonatomic) NSDictionary *layoutInfo;
@property (copy, nonatomic) NSDictionary *linkmicInfo;
@property (nonatomic) BOOL didSendData;
@property (weak, nonatomic) id<IESLiveInteractDynamicFirstScreenServiceDelegate> delegate;

- (void)updateRoom:(id)a0;
- (void)updateLayoutInfo:(id)a0;
- (void)tryToSendScreenData;
- (id)buildSimpleUserInfo;
- (void)updateGuestListInfo:(id)a0;
- (void)updateLinkmicInfo:(id)a0;
- (void).cxx_destruct;

@end
