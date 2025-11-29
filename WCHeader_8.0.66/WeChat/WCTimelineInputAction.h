@class NSString;

@interface WCTimelineInputAction : NSObject <NSCoding, PBCoding>

@property (nonatomic) long long lastInputLength;
@property (copy, nonatomic) NSString *changeHistoryList;
@property (retain, nonatomic) NSString *commitContent;
@property (nonatomic) long long cf;
@property (retain, nonatomic) NSString *inLenList;
@property (retain, nonatomic) NSString *reportDataXml;
@property (nonatomic) BOOL isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastInputLength;
+ (void)PBArrayAdd_changeHistoryList;
+ (void)PBArrayAdd_commitContent;
+ (void)PBArrayAdd_cf;
+ (void)PBArrayAdd_inLenList;
+ (void)PBArrayAdd_reportDataXml;
+ (void)PBArrayAdd_isFinished;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void).cxx_destruct;

@end
