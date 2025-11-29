@class NSString, NSMutableArray;

@interface FinderLiveShortcutWordingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *wordingList;
@property (nonatomic) unsigned int spamFlag;
@property (retain, nonatomic) NSString *spamWording;
@property (retain, nonatomic) NSMutableArray *wordingTypeList;

+ (void)initialize;

@end
