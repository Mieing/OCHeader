@class NSString;

@interface IESIMContactPickerSearchConfig : NSObject

@property (nonatomic) BOOL shouldNotShowSearchBar;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) unsigned long long searchBarType;
@property (nonatomic) BOOL showInNavigationBar;
@property (nonatomic) BOOL useFTSSearch;
@property (nonatomic) BOOL enableShowSelected;

- (void).cxx_destruct;

@end
