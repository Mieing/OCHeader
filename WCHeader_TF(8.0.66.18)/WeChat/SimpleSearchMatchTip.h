@class NSString;

@interface SimpleSearchMatchTip : NSObject

@property (retain, nonatomic) NSString *searchText;
@property (nonatomic) unsigned long long matchType;
@property (retain, nonatomic) NSString *matchWord;
@property (retain, nonatomic) NSString *matchWordTip;

- (void).cxx_destruct;

@end
