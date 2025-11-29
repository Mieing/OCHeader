@class NSArray;

@interface IESLiveGuideAudioSubScenePickerViewConfig : NSObject

@property (nonatomic) unsigned long long defaultSelectedIndex;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) struct CGSize { double width; double height; } pickerContentSize;
@property (nonatomic) struct CGSize { double width; double height; } pickerCellSize;

- (void).cxx_destruct;

@end
