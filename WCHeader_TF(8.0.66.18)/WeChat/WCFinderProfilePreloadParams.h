@class NSString, FinderUserPageReqPreload;

@interface WCFinderProfilePreloadParams : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *bizUsername;
@property (nonatomic) BOOL showBizIdentifier;
@property (nonatomic) int reportScene;
@property (retain, nonatomic) NSString *feedTid;
@property (nonatomic) int enterType;
@property (retain, nonatomic) FinderUserPageReqPreload *preload;

- (void).cxx_destruct;

@end
