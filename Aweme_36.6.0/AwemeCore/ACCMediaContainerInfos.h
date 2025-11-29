@class AWEVideoPublishViewModel;

@interface ACCMediaContainerInfos : NSObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL needPlayerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editPlayerFrame;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

- (void).cxx_destruct;

@end
