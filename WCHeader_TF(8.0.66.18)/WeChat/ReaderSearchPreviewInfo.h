@class NSString, NSArray;

@interface ReaderSearchPreviewInfo : NSObject

@property (nonatomic) BOOL showHeader;
@property (nonatomic) double width;
@property (nonatomic) double widthMargin;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSArray *arrKeyword;

- (void).cxx_destruct;

@end
