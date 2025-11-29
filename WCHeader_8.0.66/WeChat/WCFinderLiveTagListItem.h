@class NSString;

@interface WCFinderLiveTagListItem : NSObject

@property (nonatomic) long long itemId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) id userInfo;

+ (id)itemWithItemId:(long long)a0 title:(id)a1 userInfo:(id)a2;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
