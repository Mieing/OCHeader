@class NSString, NSArray, UIView;

@interface IESLynxPerformanceContext : NSObject

@property (weak) UIView *lynxView;
@property (copy, nonatomic) NSString *currentNativeVC;
@property (copy) NSString *navigationID;
@property (copy) NSString *url;
@property (copy) NSString *containerType;
@property (copy) NSString *cardVersion;
@property (retain) NSArray *contextBlockList;
@property (retain) NSArray *containerUUIDList;
@property (copy) NSString *virtualAid;
@property (nonatomic) BOOL isContainerReuse;
@property (nonatomic) long long attachTS;
@property (nonatomic) long long detachTS;

- (id)fetchCurrentAttachVCName;
- (id)fetchCustomBaseContext:(id)a0;
- (id)toNativeBase;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
