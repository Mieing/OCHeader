@class NSString, NSData, NSMutableArray;

@interface MMFinderLiveKTVSubBoardItem : NSObject

@property (nonatomic) unsigned int boardType;
@property (retain, nonatomic) NSString *boardName;
@property (nonatomic) BOOL isUpdated;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *songItems;

- (void).cxx_destruct;

@end
