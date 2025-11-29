@class NSString, NSArray;

@interface WCFilterSection : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *filterItems;
@property (retain, nonatomic) NSString *cleanBtnTitle;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSString *loadingTitle;
@property (retain, nonatomic) NSString *emptyTitle;
@property (nonatomic) BOOL canMultiSelect;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) unsigned long long defaultSelectIndex;

+ (id)convertToFilterItems:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
