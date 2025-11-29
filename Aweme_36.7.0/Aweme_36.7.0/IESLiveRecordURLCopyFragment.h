@class IESLiveRecordURLCopyView, NSString;

@interface IESLiveRecordURLCopyFragment : IESLiveRoomComponent <HTSLiveRecordURLCopyRouter, IESLiveRecordURLCopyRouter>

@property (weak, nonatomic) IESLiveRecordURLCopyView *douyinAndHotsoonRecordURLCopyView;
@property (nonatomic) BOOL panelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
