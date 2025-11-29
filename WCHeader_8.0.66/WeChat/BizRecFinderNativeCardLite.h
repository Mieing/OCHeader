@class NSString, NSMutableArray;

@interface BizRecFinderNativeCardLite : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSMutableArray *finderInfoList;
@property (nonatomic) unsigned long long clientId;
@property (nonatomic) unsigned int style;

+ (void)initialize;

@end
