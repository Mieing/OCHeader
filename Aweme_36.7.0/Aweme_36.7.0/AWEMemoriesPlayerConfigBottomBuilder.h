@class NSArray, ACCAnimatedButton;

@interface AWEMemoriesPlayerConfigBottomBuilder : NSObject

@property (copy, nonatomic) NSArray *leftBtnArray;
@property (nonatomic) double leftBtnBarViewSpace;
@property (copy, nonatomic) NSArray *rightBtnArray;
@property (retain, nonatomic) ACCAnimatedButton *mainButton;
@property (copy, nonatomic) NSArray *horizontalButtonList;
@property (copy, nonatomic) id /* block */ viewWillAppearHandler;

- (void).cxx_destruct;

@end
