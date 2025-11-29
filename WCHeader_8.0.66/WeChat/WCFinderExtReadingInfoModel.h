@class FinderExtendedReading, FinderJumpInfo;

@interface WCFinderExtReadingInfoModel : NSObject

@property (retain, nonatomic) FinderExtendedReading *extReading;
@property (nonatomic) BOOL isFromDraft;
@property (nonatomic) BOOL linkIsFromPasteBoard;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long style;
@property (nonatomic) int htmlShowStyle;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

- (id)initWithPBReadingInfo:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
