@class NSString;

@interface AWEAwemeDetailContainerDataControlConfig : NSObject

@property (nonatomic) BOOL canLoadPrevious;
@property (copy, nonatomic) NSString *initialIDs;
@property (nonatomic) BOOL needUpdateBottomBarWhenReload;
@property (nonatomic) BOOL enableSafetyCheckDeleteAllAweme;

- (void).cxx_destruct;

@end
