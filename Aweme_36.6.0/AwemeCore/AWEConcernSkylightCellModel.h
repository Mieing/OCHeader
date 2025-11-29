@class NSString;

@interface AWEConcernSkylightCellModel : NSObject

@property (copy, nonatomic) NSString *elementKey;
@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) id data;
@property (nonatomic) BOOL isPinedUserInLive;
@property (nonatomic) BOOL shouldShowRedDot;

- (void).cxx_destruct;

@end
