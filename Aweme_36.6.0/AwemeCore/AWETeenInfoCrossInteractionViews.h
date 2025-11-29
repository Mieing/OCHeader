@class NSString;

@interface AWETeenInfoCrossInteractionViews : NSObject

@property (nonatomic) BOOL recorderEnterBarClosed;
@property (copy, nonatomic) NSString *pediaID;
@property (copy, nonatomic) NSString *imprId;

+ (void)clearAllInfo;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
