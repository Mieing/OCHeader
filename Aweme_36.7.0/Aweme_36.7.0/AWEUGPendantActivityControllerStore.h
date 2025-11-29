@class NSString;

@interface AWEUGPendantActivityControllerStore : NSObject

@property (copy, nonatomic) NSString *lastActivityId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastPendantFrame;
@property (nonatomic) unsigned long long pendantStructureState;
@property (copy, nonatomic) NSString *currentUid;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
