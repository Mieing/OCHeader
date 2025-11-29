@class NSString, SdkUIContext, NSMutableArray;

@interface SquareItemSessionContext : WXPBGeneratedMessage

@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) SdkUIContext *sdkId;
@property (retain, nonatomic) NSString *lineId;
@property (retain, nonatomic) NSString *lineTitle;
@property (nonatomic) unsigned int lineLoc;
@property (retain, nonatomic) NSString *itemRequestId;
@property (retain, nonatomic) NSString *itemTitle;
@property (nonatomic) unsigned int itemLoc;
@property (retain, nonatomic) NSMutableArray *extInfo;
@property (retain, nonatomic) NSString *rootListenId;
@property (retain, nonatomic) NSString *rootListenIdType;
@property (retain, nonatomic) NSString *rootCategoryId;
@property (retain, nonatomic) NSMutableArray *newExtinfo;

+ (void)initialize;

@end
