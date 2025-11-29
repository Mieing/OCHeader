@class NSString;

@interface BDPNovelContentMeta : NSObject

@property (copy, nonatomic) NSString *traceContentType;
@property (copy, nonatomic) NSString *contentId;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long contentFormat;
@property (copy, nonatomic) NSString *volumeId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long totalWordCnt;
@property (nonatomic) long long readOffset;
@property (nonatomic) long long status;
@property (nonatomic) long long freeWords;
@property (nonatomic) long long calFreeWords;
@property (nonatomic) long long innerAbsoluteIndex;
@property (copy, nonatomic) NSString *bookId;
@property (nonatomic) double endingTopOffset;
@property (nonatomic) double endingBottomOffset;
@property (copy, nonatomic) NSString *endingText;

- (id)traceContentTypeStr;
- (void)updateContentType:(id)a0;
- (void)updateContentFormat:(id)a0;
- (BOOL)needScrollToTarget;
- (void).cxx_destruct;
- (id)description;

@end
