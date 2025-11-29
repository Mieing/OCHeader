@class NSString;

@interface AWERLSegmentItemDataModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *selectedTitle;
@property (copy, nonatomic) NSString *backupTitle;
@property (nonatomic) BOOL shouldShowRedDot;
@property (copy, nonatomic) NSString *redDotContentString;

- (void).cxx_destruct;

@end
