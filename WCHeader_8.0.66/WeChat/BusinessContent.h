@class NSString, NSMutableArray;

@interface BusinessContent : WXPBGeneratedMessage

@property (nonatomic) unsigned long long businessType;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *keyWordList;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) unsigned int totalCount;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned int offset;

+ (void)initialize;

@end
