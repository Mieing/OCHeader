@class NSString, NSObject;
@protocol LSListCellTrackProtocol, LSListCellVMDelegate;

@interface LSListCellVM : NSObject <LSListCellVMProtocol>

@property (readonly, copy, nonatomic) NSString *cellReuseID;
@property (readonly, nonatomic) id cellModel;
@property (readonly, nonatomic) NSObject<LSListCellTrackProtocol> *cellTrack;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL cellDisplay;
@property (weak, nonatomic) NSObject<LSListCellVMDelegate> *cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCellWillDisplay:(id)a0;
- (void)cellHeightDidChangedNeedShowFull:(BOOL)a0;
- (id)initWithCellReuseID:(id)a0 cellModel:(id)a1;
- (void)handleCellDidSelect:(id)a0;
- (void)handleCellDidEndDisplaying;
- (void).cxx_destruct;
- (void)sendAction:(id)a0;

@end
