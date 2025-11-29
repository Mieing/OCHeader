@class NSString, NSMutableArray;

@interface SearchCgiGuideConfig : NSObject

@property (retain, nonatomic) NSString *vertTitle;
@property (retain, nonatomic) NSMutableArray *arrVertEntryData;

- (id)getTitleForBusinessType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
