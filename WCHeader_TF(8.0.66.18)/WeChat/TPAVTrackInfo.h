@class AVMediaSelectionOption, AVMediaSelectionGroup;

@interface TPAVTrackInfo : NSObject

@property (retain, nonatomic) AVMediaSelectionOption *option;
@property (retain, nonatomic) AVMediaSelectionGroup *group;
@property (nonatomic) BOOL isSelected;

- (void).cxx_destruct;

@end
