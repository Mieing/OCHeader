@class NSString, IESLiveAnnouncementViewModel;

@interface IESLiveAnnouncementEditFunctionCellItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL isNecessary;
@property (nonatomic) BOOL enterNewPage;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL needDetail;
@property (copy, nonatomic) id /* block */ onItemTapped;
@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (nonatomic) BOOL needInfoTipView;
@property (copy, nonatomic) id /* block */ infoTipViewTapped;
@property (nonatomic) BOOL needNewItemRedDot;

- (void).cxx_destruct;

@end
