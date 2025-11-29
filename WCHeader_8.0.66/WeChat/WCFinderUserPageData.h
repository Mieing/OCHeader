@class NSArray, FinderUserPageResponse, NSData, WCFinderContact;

@interface WCFinderUserPageData : NSObject

@property (nonatomic) unsigned long long topicId;
@property (nonatomic) BOOL isFirstPageRequest;
@property (nonatomic) BOOL pullFromTop;
@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) BOOL continueFlag;
@property (copy, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderUserPageResponse *response;

- (void).cxx_destruct;

@end
