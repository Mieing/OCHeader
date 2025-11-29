@class NSString, NSDictionary, NSArray, NSNumber;
@protocol AWEHttpTask;

@interface AWELiveAcqCastVideoSearchUserManager : NSObject

@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hitLimit;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) NSArray *userList;

- (id)initWithKeyword:(id)a0;
- (void)loadMoreUser:(id /* block */)a0;
- (void).cxx_destruct;

@end
