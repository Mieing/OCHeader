@class NSString;
@protocol AWEIMShareModelProtocol;

@interface AWEPlayInteractionShareElementFlipModel : NSObject

@property (retain, nonatomic) id<AWEIMShareModelProtocol> flipShareModel;
@property (copy, nonatomic) NSString *shareFlipTrigger;
@property (copy, nonatomic) NSString *shareFlipType;
@property (nonatomic) BOOL hasIncentivePendant;
@property (nonatomic) BOOL defaultSelectFlipShareModel;

- (void).cxx_destruct;

@end
