@class NSString, MMUIViewController;

@interface MMFinderLiveCompleteViewReplaySettingsCoverPickingRequest : NSObject

@property (retain, nonatomic) NSString *correlationId;
@property (retain, nonatomic) MMUIViewController *pickerHostingVc;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)init;
- (void).cxx_destruct;

@end
