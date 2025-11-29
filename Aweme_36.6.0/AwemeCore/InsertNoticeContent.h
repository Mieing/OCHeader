@class NSString, NSMutableArray, NSMutableDictionary;

@interface InsertNoticeContent : GPBMessage

@property (copy, nonatomic) NSString *tips;
@property (nonatomic) BOOL hasTips;
@property (retain, nonatomic) NSMutableArray *templateArray;
@property (readonly, nonatomic) unsigned long long templateArray_Count;
@property (nonatomic) int aweType;
@property (nonatomic) BOOL hasAweType;
@property (nonatomic) int showPosition;
@property (nonatomic) BOOL hasShowPosition;
@property (nonatomic) int exitStrategy;
@property (nonatomic) BOOL hasExitStrategy;
@property (nonatomic) int showTimes;
@property (nonatomic) BOOL hasShowTimes;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (nonatomic) int preCheckMsgCount;
@property (nonatomic) BOOL hasPreCheckMsgCount;

+ (id)descriptor;

@end
