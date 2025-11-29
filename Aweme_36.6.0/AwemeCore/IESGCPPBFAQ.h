@class NSMutableArray;

@interface IESGCPPBFAQ : GPBMessage

@property (nonatomic) BOOL showEntrance;
@property (retain, nonatomic) NSMutableArray *faqListArray;
@property (readonly, nonatomic) unsigned long long faqListArray_Count;

+ (id)descriptor;

@end
