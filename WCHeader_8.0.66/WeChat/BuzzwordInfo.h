@class NSString, NSMutableArray;

@interface BuzzwordInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *visitorTitle;
@property (retain, nonatomic) NSMutableArray *buzzwords;
@property (retain, nonatomic) NSString *editTitle;
@property (retain, nonatomic) NSString *manageTitle;

+ (void)initialize;

@end
