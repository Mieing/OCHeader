@class FinderSearchHotWord, NSString, FinderSearchSecurityTips, NSData, NSMutableArray, BaseResponse;

@interface FinderSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *infoList;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSString *requsetId;
@property (retain, nonatomic) NSMutableArray *topicInfoList;
@property (nonatomic) unsigned int objectContinueFlag;
@property (nonatomic) unsigned int topicContinueFlag;
@property (retain, nonatomic) NSMutableArray *musicInfoList;
@property (nonatomic) unsigned int musicContinueFlag;
@property (retain, nonatomic) FinderSearchSecurityTips *securityTips;
@property (retain, nonatomic) FinderSearchHotWord *hotwordInfo;
@property (retain, nonatomic) NSMutableArray *multiFeedStream;

+ (void)initialize;

@end
