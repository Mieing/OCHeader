@class NSDictionary, NSString;

@interface AWEVideoCoverEvaluateAiDetailModel : NSObject

@property (copy, nonatomic) NSDictionary *url;
@property (copy, nonatomic) NSString *problemTitle;
@property (copy, nonatomic) NSString *problemCaption;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isLandscapeCover;
@property (nonatomic) long long status;

- (void).cxx_destruct;

@end
