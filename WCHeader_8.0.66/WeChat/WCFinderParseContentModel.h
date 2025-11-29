@class NSString, NSMutableString, NSMutableArray;

@interface WCFinderParseContentModel : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSMutableString *content;
@property (retain, nonatomic) NSMutableString *contentHighlight;
@property (retain, nonatomic) NSMutableArray *topicsArray;
@property (retain, nonatomic) NSMutableArray *mentionArray;
@property (retain, nonatomic) NSMutableArray *mentionRangeArray;
@property (nonatomic) unsigned long long lastParseTimeStamp;
@property (retain, nonatomic) NSString *lastParseTitleMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_contentHighlight;
+ (void)PBArrayAdd_topicsArray;
+ (void)PBArrayAdd_mentionArray;
+ (void)PBArrayAdd_lastParseTimeStamp;
+ (void)PBArrayAdd_lastParseTitleMd5;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

@end
