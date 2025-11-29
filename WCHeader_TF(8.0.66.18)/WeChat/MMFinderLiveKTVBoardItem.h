@class NSString, MMFinderLiveKTVSubBoardItem, NSData, NSMutableArray;

@interface MMFinderLiveKTVBoardItem : NSObject

@property (nonatomic) unsigned int boardType;
@property (retain, nonatomic) NSString *boardName;
@property (nonatomic) BOOL isUpdated;
@property (nonatomic) BOOL hasNext;
@property (nonatomic) BOOL hasPrevious;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *reverseLastBuffer;
@property (retain, nonatomic) NSMutableArray *songItems;
@property (nonatomic) BOOL isDefault;
@property (retain, nonatomic) NSMutableArray *subBoardItems;
@property (retain, nonatomic) MMFinderLiveKTVSubBoardItem *selectedSubBoardItem;

- (void).cxx_destruct;

@end
