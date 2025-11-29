@class NSString;

@interface AWEProgressSectionViewContext : NSObject

@property (copy, nonatomic) id /* block */ sectionViewClickedBlock;
@property (copy, nonatomic) id /* block */ getPlayTime;
@property (copy, nonatomic) id /* block */ getLogExtra;
@property (copy, nonatomic) NSString *referString;

- (void).cxx_destruct;

@end
