@class NSString, NSMutableArray;

@interface BSBusinessContent : NSObject

@property (nonatomic) unsigned long long businessType;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *keyWordList;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) unsigned int totalCount;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int offset;

+ (id)fromServerObj:(id)a0;

- (void).cxx_destruct;

@end
