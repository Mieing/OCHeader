@class NSString;

@interface AWELiveVisibleTypeModel : NSObject

@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL noDeeperEntry;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL isPaidOpenLiveNow;
@property (nonatomic) unsigned long long representVisibilityRangeType;
@property (nonatomic) int visibilityRangeType;
@property (nonatomic) BOOL disable;
@property (nonatomic) unsigned long long modelType;
@property (nonatomic) unsigned long long functionType;

- (void).cxx_destruct;

@end
