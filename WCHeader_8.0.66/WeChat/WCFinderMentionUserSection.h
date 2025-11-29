@class NSString, NSMutableArray, NSData;

@interface WCFinderMentionUserSection : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) NSString *showMoreWording;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL couldFold;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isFold;
@property (copy, nonatomic) id /* block */ fetchNext;

- (id)init;
- (void).cxx_destruct;

@end
