@class NSString, NSNumber;

@interface AWELiveSquareBubbleGuideModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *anchorID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *actionUrl;
@property (copy, nonatomic) NSString *pushType;
@property (copy, nonatomic) NSString *issueID;

- (void).cxx_destruct;

@end
