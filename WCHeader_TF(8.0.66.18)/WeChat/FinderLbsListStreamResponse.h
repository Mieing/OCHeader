@class NSData, NSString, NSMutableArray;

@interface FinderLbsListStreamResponse : WXPBGeneratedMessage

@property (nonatomic) unsigned int lbsType;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSMutableArray *lbsResponseList;

+ (void)initialize;

@end
