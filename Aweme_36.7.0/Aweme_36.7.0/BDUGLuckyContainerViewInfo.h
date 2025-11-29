@class NSString;

@interface BDUGLuckyContainerViewInfo : NSObject

@property (copy, nonatomic) NSString *fullURL;
@property (nonatomic) BOOL enableLoadFailedView;
@property (nonatomic) BOOL viewAppeared;
@property (nonatomic) BOOL viewIsReady;
@property (nonatomic) BOOL viewPendingAppear;
@property (nonatomic) BOOL viewPendingBecomeActive;

+ (id)createAndAttachViewInfoWithView:(id)a0;
+ (id)viewInfoWithView:(id)a0;

- (void).cxx_destruct;

@end
