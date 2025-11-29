@class NSString, NSMutableArray;

@interface TLRecFinderCardWrapper : WXPBGeneratedMessage

@property (nonatomic) int subType;
@property (retain, nonatomic) NSMutableArray *finderCardDatas;
@property (retain, nonatomic) NSString *recSummary;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *fromSessionIdInfo;
@property (nonatomic) int finderShowType;

+ (void)initialize;

@end
