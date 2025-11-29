@class NSString, NSArray, UIImage, NSDictionary, AWESearchScanSuggestWordModel;

@interface AWESearchScanGraphicMiddleDataContext : NSObject

@property (retain, nonatomic) UIImage *searchImage;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSArray *guessWords;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) AWESearchScanSuggestWordModel *currentSearchBoxSuggestWord;

- (void).cxx_destruct;

@end
