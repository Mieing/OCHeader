@class NSArray, NSDictionary, NSString;

@interface AWEIMShareSelectionPanelConfig : NSObject

@property (copy, nonatomic) id /* block */ publishStoryBlock;
@property (copy, nonatomic) id /* block */ goNextBlock;
@property (copy, nonatomic) id /* block */ publishNormalBlock;
@property (retain, nonatomic) NSArray *bottomButtons;
@property (retain, nonatomic) NSDictionary *extraLogDict;
@property (retain, nonatomic) NSString *momentType;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL enableMessageTabSort;
@property (nonatomic) BOOL enableUseNewSecondSharePanel;

- (void).cxx_destruct;

@end
