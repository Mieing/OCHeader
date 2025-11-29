@class NSString, WCProgressViewHelper;

@interface WCProgressViewBaseAction : NSObject

@property (weak, nonatomic) WCProgressViewHelper *helper;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) NSString *displayText;

- (void).cxx_destruct;

@end
