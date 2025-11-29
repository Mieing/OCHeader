@class NSString, NSArray, NSDictionary, UIView;

@interface IESXLynxPerformanceContext : NSObject

@property (weak) UIView *lynxView;
@property (copy) NSString *currentNativeVC;
@property (copy) NSString *navigationID;
@property (copy) NSString *url;
@property (copy) NSString *containerType;
@property (copy) NSString *cardVersion;
@property (retain) NSArray *contextBlockList;
@property (retain) NSArray *containerUUIDList;
@property (retain) NSDictionary *jsBase;
@property (copy) NSString *virtualAid;
@property (nonatomic) BOOL isContainerReuse;
@property (nonatomic) long long attachTS;
@property (nonatomic) long long detachTS;
@property (nonatomic) long long bdlm_loadState;
@property (nonatomic) long long stage;

- (id)fetchCurrentAttachVCName;
- (id)fetchCustomBaseContext:(id)a0;
- (id)toNativeBase;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
