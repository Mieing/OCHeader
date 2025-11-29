@class AWEProgressUITextConfig, AWEProgressUIContainerConfig;

@interface AWEProgressChapterUIConfig : NSObject

@property (retain, nonatomic) AWEProgressUIContainerConfig *containerConfig;
@property (retain, nonatomic) AWEProgressUITextConfig *defaultTextConfig;
@property (retain, nonatomic) AWEProgressUITextConfig *selectedTextConfig;

- (void).cxx_destruct;

@end
