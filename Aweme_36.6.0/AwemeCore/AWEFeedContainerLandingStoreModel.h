@class NSString, AWEHPTabLandingModel;

@interface AWEFeedContainerLandingStoreModel : NSObject

@property (retain, nonatomic) NSString *tabId;
@property (retain, nonatomic) AWEHPTabLandingModel *model;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ exitBlock;

- (void).cxx_destruct;

@end
