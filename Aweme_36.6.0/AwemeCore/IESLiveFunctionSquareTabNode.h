@class NSString, NSArray;

@interface IESLiveFunctionSquareTabNode : NSObject

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isDuringLive;
@property (nonatomic) BOOL showDescButton;
@property (nonatomic) BOOL showSelector;
@property (copy, nonatomic) NSArray *selectKeys;
@property (copy, nonatomic) NSString *defaultKey;
@property (copy, nonatomic) NSString *currentKey;
@property (nonatomic) BOOL isSelecting;

- (void).cxx_destruct;

@end
