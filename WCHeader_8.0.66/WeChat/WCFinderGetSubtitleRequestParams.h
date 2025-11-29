@class NSString, NSData, NSMutableArray;

@interface WCFinderGetSubtitleRequestParams : NSObject

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long subtitleId;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *languageReq;

- (id)description;
- (void).cxx_destruct;

@end
