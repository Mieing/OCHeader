@class IESLiveLinkmicCanvasSlotLayoutConfig, NSString;
@protocol IESLiveInteractUserModel;

@interface IESLiveLinkmicCanvasViewCellModel : NSObject

@property (copy, nonatomic) id /* block */ onUserUpdateBlock;
@property (copy, nonatomic) id /* block */ onSessionViewUpdatedBlock;
@property (retain, nonatomic) IESLiveLinkmicCanvasSlotLayoutConfig *slotConfig;
@property (readonly, copy, nonatomic) NSString *cellIdentifier;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;

- (void)onUserUpdated:(id /* block */)a0;
- (void)onSessionViewUpdated:(id /* block */)a0;
- (void)insertRTCSessionView:(id)a0 isLocalPreview:(BOOL)a1;
- (void).cxx_destruct;

@end
