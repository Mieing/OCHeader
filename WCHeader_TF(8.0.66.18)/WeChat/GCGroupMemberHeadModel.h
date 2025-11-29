@class NSString, UIColor, Slot;

@interface GCGroupMemberHeadModel : GCBaseCellModel

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *useAsText;
@property (nonatomic) BOOL isOnline;
@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) NSString *stateIconUrl;
@property (retain, nonatomic) NSString *statusDesc;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UIColor *statusIconBgColor;
@property (nonatomic) BOOL needPlayAnimation;
@property (nonatomic) BOOL needFold;
@property (nonatomic) int numCircles;
@property (retain, nonatomic) Slot *slotInfo;

- (Class)bindCellClass;
- (void).cxx_destruct;

@end
