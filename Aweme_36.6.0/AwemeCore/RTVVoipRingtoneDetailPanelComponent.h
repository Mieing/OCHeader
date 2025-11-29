@class NSString, RTVVoipRingtoneDetailPanelView;

@interface RTVVoipRingtoneDetailPanelComponent : NSObject <DUXSheetDelegate, RTVVoipRingtoneDetailPanelProtocol>

@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *musicTitle;
@property (retain, nonatomic) NSString *musicSubTitle;
@property (retain, nonatomic) RTVVoipRingtoneDetailPanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
