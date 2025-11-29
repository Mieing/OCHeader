@class HTSLiveTabItem;

@interface IESLivePrivilegeDanmakuTabViewModel : NSObject

@property (retain, nonatomic) HTSLiveTabItem *tabItem;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ didSelected;
@property (nonatomic) long long style;
@property (nonatomic) BOOL isDivider;
@property (nonatomic) BOOL isCancel;

- (void).cxx_destruct;

@end
