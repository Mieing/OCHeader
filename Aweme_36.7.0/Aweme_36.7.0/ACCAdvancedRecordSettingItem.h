@class NSString, UIImage;

@interface ACCAdvancedRecordSettingItem : NSObject <ACCPopupTableViewDataItemProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) unsigned long long cellType;
@property (nonatomic) BOOL showInfoButton;
@property (copy, nonatomic) NSString *infoTipText;
@property (copy, nonatomic) id /* block */ needAutoShowInfoTipBlock;
@property (nonatomic) BOOL switchState;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) BOOL touchEnable;
@property (copy, nonatomic) id /* block */ customSegmentSavingBlock;
@property (copy, nonatomic) id /* block */ customSwitchSavingBlock;
@property (copy, nonatomic) id /* block */ needShow;
@property (copy, nonatomic) id /* block */ segmentActionBlock;
@property (copy, nonatomic) id /* block */ switchActionBlock;
@property (copy, nonatomic) id /* block */ canAcceptHandlerTapWrapper;
@property (copy, nonatomic) id /* block */ segmentActionBlockWrapper;
@property (copy, nonatomic) id /* block */ switchActionBlockWrapper;
@property (copy, nonatomic) id /* block */ trackEventSegmentBlock;
@property (copy, nonatomic) id /* block */ trackEventSwitchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
