@class NSNumber;

@interface IESECLiveIntroducingCellABConfig : NSObject

@property (copy, nonatomic) NSNumber *instantType;

- (id)initWithLiveType:(id)a0;
- (BOOL)shouldShowOldExplainBar;
- (BOOL)shouldShowTopExplainCardShowInOtherTab;
- (BOOL)shouldShowNewExplainBar;
- (BOOL)shouldShowNewExplainBarInAllTab;
- (BOOL)shouldShowNewExplainBarInOtherTab;
- (BOOL)isNormalRoom;
- (void).cxx_destruct;

@end
