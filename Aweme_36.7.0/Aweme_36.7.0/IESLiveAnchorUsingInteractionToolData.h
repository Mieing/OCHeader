@class NSString;

@interface IESLiveAnchorUsingInteractionToolData : NSObject

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) int appType;
@property (nonatomic) int interactionType;
@property (copy, nonatomic) NSString *extra;

- (void).cxx_destruct;
- (id)uniqueID;

@end
